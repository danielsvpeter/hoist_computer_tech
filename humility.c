/*
 * forkexec.c - illustrates simple fork/exec usage
 */
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(int argc, char *argv[])
{
	pid_t child;
		int status;


	child = fork();
	if (child == 0) {
			printf("in child\n");
			execl("/bin/ls", "/bin/ls", NULL);
			} else {
				printf("in parent\n");
				waitpid(child, &status, 0);
			}

			return 0;
				
}
