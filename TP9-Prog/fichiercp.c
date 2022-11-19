#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#define TAILLEMAX 512


int main( int argc, char *argv[])
{
  
  	struct stat statistiques;
  	int erreurd;
	int droits;
	int choice;
	char tableau[50];
    	int desc1, desc2;
    	char tampon[TAILLEMAX];
    	int erreur;
    	int retour;
  /*argument 1*/  
    desc1=open(argv[1], O_RDONLY);
    if(desc1==-1)
    {
	perror("Une erreur d'ouverture");
	exit(1);
    }
    
    
  /*copie des droits*/
    erreurd=stat(argv[1], &statistiques);
		if(erreurd==-1)
		{
			perror("echec");
			exit(1);
		}
		else
		{
		
			droits=statistiques.st_mode & 0x01FF;
		}
       		
   /*argument 2*/     
    desc2=open(argv[2], O_WRONLY | O_CREAT | O_EXCL, droits);
    if(desc2==-1)
    {
      /*Gestion des erreurs si le fichier existe déjà. Renommer / Ecraser*/
	printf("Le fichier existe déjà ! \n Tape -1 pour changer de nom \n Tape -2 pour écraser le fichier \n ");
	scanf("%d", &choice);
	switch(choice)
	{
	  case 1 : 
	    
	    printf("Saisir un autre nom (avec le chemin s'il est dans un autre dosier): \n");
	    scanf("%s", tableau);
	    desc2=open(tableau, O_WRONLY | O_CREAT | O_EXCL, droits);
	    printf("Le fichier a été créé avec succès.\n");break;
	    
	  case 2 : 
	    desc2=open(argv[2], O_WRONLY | O_CREAT , droits);
	    printf("Le fichier a été ecrasé\n");break;
	    
	  default : 
	    printf("Saisie incorrecte\n"); 
	}
	
    }
 /*Copie du fichier*/   
    do
    {
	retour=read(desc1, tampon, sizeof(tampon));
	if (erreur==-1)
	{
	    perror("Problème de lecture");
	    exit(3);
	}
	erreur=write(desc2, tampon, retour);
	if (erreur==-1)
	{
	    perror("Problème de lecture");
	    exit(4);
	}
    }while(retour==TAILLEMAX);
    
    close(desc1);
    close(desc2);
    return 0;
}
