#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>

int main(int argc, char *argv[]){

  if(argc == 1){
    printf("Please enter a directory name.\n");
    exit(1);
  }

  else if(argc > 2){
    printf("Spaces are not permitted.\n");
    exit(1);
  }

  else{
    mkdir(argv[1], 0755);
  }

  return 0;
}
