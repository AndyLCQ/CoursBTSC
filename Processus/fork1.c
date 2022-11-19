#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int testVariableGlobal=1;
void main(void)
{
    
    pid_t pid;

    pid=fork();
    	
    switch (pid)
    {
      case (pid_t)-1:
	perror("Création de processus");
	exit(2);
      case (pid_t)0:
	/*Dans le fils*/
	sleep(5);
	printf("Je suis le processus %d de père %d \n", getpid(), getppid());
	printf("Fin du processus fils \n");
	printf("Varible globale : %d\n", testVariableGlobal);
	exit(0);
      default :
	/*On est dans le père*/
	testVariableGlobal=2;
	printf("Je suis le processus %d de père %d \n", getpid(), getppid());
	printf("Fin du processus père\n");
	printf("Varible globale : %d\n", testVariableGlobal);
    }
}
	