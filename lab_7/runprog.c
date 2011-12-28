#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(int argc, char *argv[]){
	printf("The comend line:  \n");
	
	int i;
	int status;
	
	for(i=1 ; i<argc ; i++){
	 
	printf("%s ", argv[i]);
	}
	printf("\n");
	pid_t pid = fork();
	
	if(pid ==0){
	  printf("\n");
          execvp(argv[1], argv+1);
	}
	else{
	  wait(&status);
	}
	printf("%d\n", WEXITSTATUS(status));
	
}
