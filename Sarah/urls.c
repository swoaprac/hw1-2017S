#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Finds and returns URL from a line
void
find_url(char* line, char* url) 
{
	char* img_text = "<img";
	char* img_location = strstr(line, img_text);

	char* source_text = "*src=\"*\"*>";
	char* source_location = strstr(img_location, source_text);

	*source_location += 1;
	size_t len = strlen(source_location) - 1;
	url = strncpy(source_location, url, len);
}

int
main(int argc, char const *argv[]) 
{
	char* line = (char*)malloc(1024);
	char* url = malloc(1024);
  	FILE* input = fopen("input", "r");
  	// checking that the file exists
  	if (input == NULL) {
  		printf("No such file\n");
  		exit(1);
  	}
	while(fgets(line, 1024, input))
	{
		find_url(line, url);
		printf("%s\n", url);
	}

  	fclose(input);
  	free(line);
  	free(url);
  	return 0;
}