#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

char buffer[256];
int lines;
int words;
size_t bytes;

int main(int argc, char *argv[]){


	char *token = strtok(buffer, " ");

	if(argc == 1 || argc > 2){
	    perror("nxwc");
	    exit(1);
	}

	else{

	   FILE *fp = fopen(argv[1], "r");

	   if(fp != NULL){
		while(fgets(buffer, sizeof(buffer), fp)){

		      bytes += strlen(buffer);

		      token = strtok(buffer, " \n");


    		      while (token != NULL) {
        		   words++;
        		   token = strtok(NULL, " \n");
    			}
			lines++;
		}
	   }

	   printf("%d %d %zu\n", lines, words, bytes);

	}

	return 0;
}
