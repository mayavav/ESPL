#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(int argc, char *argv[]){
	int i;
	int status;
	//don't tuch
	for(i=1 ; i<argc ; i++){
	  printf("%s ", argv[i]);
	}
	//creat fork
	printf("\n");
	pid_t pid = fork();
	
	//if this is the child
	if(pid ==0){
          execvp(argv[1], argv+1);
	}
	
	//if this is the parent
	else{
	  wait(&status);
	}
	printf("exit status: %d\n", WEXITSTATUS(status));
	
}
