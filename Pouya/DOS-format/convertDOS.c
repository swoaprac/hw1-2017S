#include <stdio.h>

//change /r in DOS file to nothing
void
convertDOS (char * src, char * des){
  FILE * input = fopen(src, "r");
  FILE * output = fopen(des, "w");
  char c;
  while ((c = fgetc (input)) != EOF){
    if (c != '\r'{
      fputc (c, output);
    }
  }
  fclose(input);
  fclose(output);
}


int
main(int argc, char const *argv[]) {
  return 0;
}
