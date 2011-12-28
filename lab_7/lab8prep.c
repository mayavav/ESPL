#include <sys/wait.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
  pid_t cpid;
  int status;

  cpid = fork();
  if (cpid == -1) {
    perror("fork");
    exit(EXIT_FAILURE);
  }

  if (cpid == 0) {            /* Code executed by child */
    printf("PID is %ld\n", (long) getpid());
    exit(argc==2?atoi(argv[1]):0);
  } else {                    /* Code executed by parent */
    printf("Child PID is %ld\n", (long)cpid);
    wait(&status);
    printf("%ld exited with status %ld\n", (long)cpid, (long)status);
    exit(0);
  }
}