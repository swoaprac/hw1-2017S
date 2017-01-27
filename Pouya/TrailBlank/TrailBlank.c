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
  FILE * input = fopen ("Input.txt", "r");
  FILE * output = fopen ("Output.txt", "w");
  cleanUp(input, output);
  fclose (input);
  fclose (output);
  return 0;
}

// note: in case space runs out, I have no idea what's gonna happen, I'll
//    get there later.
// this funtion reads each line, and saves it in a buffer.
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

//function clears blank space in the end of str
void
cleanBlank (char * str, int index){
    while (isblank (str[--index]));
    str[index + 1] = '\0';
}

//this function combines getLine and cleanBlank. Also prints out our line
//  into output file.
void
cleanUp (FILE * src, FILE * des){
  char str[BUFFERSIZE];
  int index;
  while (STATE){
    index = getLine (str, src);
    cleanBlank(str, index);
    if (STATE){
      fprintf(des, "%s", str);
    }
  }
}
