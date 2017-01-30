#include <stdio.h>
#include <ctype.h>

void
remove_trailing_blanks (FILE* in, FILE* out)
{
	char c;
	while ((c = fgetc (in)) != EOF){
	    if (c != '\r') {
	    	fputc (c, out);
	    }
	}
}

int
main () 
{
  FILE * in = fopen ("input", "r");
  FILE * out = fopen ("output", "w");
  remove_trailing_blanks (in, out);
  fclose (in);
  fclose (out);
  return 0;
}