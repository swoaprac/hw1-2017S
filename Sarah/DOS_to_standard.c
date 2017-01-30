#include <stdio.h>
#include <ctype.h>

// Converts to a DOS, with just \n instead of \r\n at the end of lines
void
convert_to_DOS (FILE* in, FILE* out)
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
  convert_to_DOS (in, out);
  fclose (in);
  fclose (out);
  return 0;
}