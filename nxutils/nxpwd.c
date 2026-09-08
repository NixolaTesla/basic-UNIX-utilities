#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

char cwd[1024];

int main(int argc, char *argv[]){

  getcwd(cwd, sizeof(cwd));

  if(cwd != NULL){
    printf("%s\n", cwd);
  }

  else{
    perror("cwd");
    exit(1);
  }

  // too ez B-)

  return 0;
}
