#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#define BUFFERSIZE 2000
int main(int argc, char **argv) {
  ssize_t n;
  char bufferString[BUFFERSIZE];
  int file;
  file = open(argv[1], O_RDONLY);
  while ((n = read(file, bufferString, BUFFERSIZE)) > 0){
  	printf("%s", bufferString);
  	//write(2,bufferString,BUFFERSIZE);
  }
  	
  return 0;
}