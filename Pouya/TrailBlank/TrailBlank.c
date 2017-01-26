/* Program to remove all blank spaces at the end of lines.
*/

#include <stdio.h>

#define BUFFERSIZE 1000

int
getLine (char * str, FILE * src);
int
cleanBlank (int index);

int
main(int argc, char const *argv[]) {
  /* code */
  return 0;
}

// note: in case space runs out, I have no idea what's gonna happen, I'll
//    get there later.
int
getLine (char * str, FILE * src){
  int i;
  char c;
  //function reads line until it meets new line, EOF or runs out.
  for(i = 0; i < BUFFERSIZE && (c = fgetc(src)) != '\n' && c != EOF; i++){
    str[i] = c;
  }
  if (c == '\n'){
    str[i++] == '\n';
  }
  str[i++] == '\0';
  // this is to know make things easier for the clearBlank function.
  if (c == EOF)
    return i - 1;
  return i;
}
