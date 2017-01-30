#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

// Changes all uppercase letters in a file to lowercase and 
// copies file contents to a new file
void
upper_to_lower(FILE* in, FILE* out)
{
	char c;
	while ((c = fgetc (in)) != EOF){
	    if (isupper(c)){
	      c = tolower(c);
	    }
	    fputc (c, out);
	}
}

int
main() 
{
	FILE* in = fopen("input", "r");
	FILE* out = fopen("output", "w");
	upper_to_lower(in, out);
	fclose(in);
	fclose(out);
	return 0;
}