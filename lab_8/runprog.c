#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>

#define MSGSIZE 32

int main(int argc, char *argv[]){
	char inbuf[MSGSIZE];
	pid_t child_pid;
	int child_status;
	int p[2], j, pid;
	int i;
	//int status;
	
	for(i=1 ; i<argc ; i++){
		printf("%s ", argv[i]);
	}
	
	   /* open pipe */
	if(pipe(p) == -1){ 
		perror("pipe call error");
		exit(1);
	}
	
	printf("\n");
	child_pid = fork();
	

	if(pid ==-1){
		perror("error: fork call");
		exit(2);
	}

	if(pid ==0){
		write(p[1],execvp(argv[1],argv+1), MSGSIZE);
	}

	else{
		close(p[1]);  /* first close the write end of the pipe */
		for(j=0; j<3; j++){
			read(p[0], inbuf, MSGSIZE);
			printf("Parent: %s\n", inbuf);
		}
		wait(&child_status);
	}
	printf("exit child_status:%d\n",WEXITSTATUS(child_status));
	
}
