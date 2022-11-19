#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include<sys/wait.h>
#include<stdlib.h>
#include <sys/types.h>
#include <signal.h>






int main () 
{
  int valeur, ret_fils,etat, ret_kill ;
  printf ("Je suis le processus pere de pid %d \n", (int)getpid());
  valeur=fork();
  switch (valeur)
  {
    case 0 :
      printf("\t\t\t\t********\n\t\t\t\t* FILS * \n\t\t\t\t********\n");
      printf ("\t\t\t\tProc fils de pid %d \n\t\t\t\tPere de pid %d \n",(int) getpid(),(int) getppid() );
      printf("\t\t\t\tJe vais dormir 30 secondes ...\n");
      sleep(30);
      printf("\t\t\t\tJe me reveille ,\n\t\t\t\tJe termine mon execution par un EXIT(7)\n");
//--- > ajout fin avec valeur de retour 7
      exit(7);
  case -1:
      printf ("Le fork a echoue");
//--- > ajout fin avec valeur de retour 2
      exit(2);
  default:
      printf("********\n* PERE *\n********\n");
      printf ("Proc pere de pid %d \nFils de pid %d \n",(int) getpid(),valeur );
      printf ("J'attends la fin de mon fils...\n");
      sleep(5);
      ret_kill=kill(valeur, 9); // Kill le processus fils avec le signal 9 (kill)
//--- > ajout attente fin fils
      ret_fils=wait(&etat);
      printf("Mon fils de pid %d est termine,\n Son etat etait : %04x\n",ret_fils,etat);
      printf("Valeur de retour de kill : %d \n" , ret_kill);
  
  }
return 0;
}
