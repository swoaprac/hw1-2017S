/* Program to remove all blank spaces at the end of lines.
*/

#include <stdio.h>
#include <ctype.h>
#define BUFFERSIZE 1000
#define GO 1
#define STOP 0


int static
STATE = GO;

int static
getLine (char * str, FILE * src);

void
cleanBlank (char * str, int index);

void
cleanUp (FILE * src, FILE * des);

int
main(int argc, char const *argv[]) {
  FILE * input = fopen ("Solution.txt", "r");
  FILE * output = fopen ("Output.txt", "w");
  cleanUp(input, output);
  fclose (input);
  fclose (output);
  return 0;
}

// note: in case space runs out, I have no idea what's gonna happen, I'll
//    get there later.
int static
getLine (char * str, FILE * src){
  int i;
  char c;
  //function reads line until it meets new line, EOF or runs out.
  for(i = 0; i < BUFFERSIZE && (c = fgetc(src)) != '\n' && c != EOF; i++){
    str[i] = c;
  }
  if (c == EOF){
    STATE = STOP;
  }
  return i;
}

void
cleanBlank (char * str, int index){
  if (index == 0){
      str[0] = '\0';
  }
  else {
    while (isblank (str[index--]));
    str[index + 1] = '\0';
  }
}

void
cleanUp (FILE * src, FILE * des){
  char str[BUFFERSIZE];
  int index;
  while (STATE){
    index = getLine (str, src);
    cleanBlank(str, index);
    fprintf(des, "%s\n", str);
    printf("%d\t%d\n", STATE, index);
  }
}
