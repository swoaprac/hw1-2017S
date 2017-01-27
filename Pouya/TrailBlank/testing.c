//this file is to test the TrailBlank.c

#include <stdio.h>

int
main(int argc, char const *argv[]) {
  FILE * output = fopen ("Input.txt", "w");
  fprintf(output, "whatup?\t\t\t\t\t\t\n");
  fprintf(output, "moving to second line\t\t\t   \t\t\t\n");
  fprintf(output, "Ok, last line of these \t\t\t\t\t. \t\t\t  \n");
  return 0;
}
