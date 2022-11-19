#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>

int main()
{
	struct stat statistiques;
	int erreur;
	int droits;
	int type_fichier;
	
	erreur=stat("rep", &statistiques);
	if(erreur==-1)
	{
		perror("echec");
		exit(1);
	}
	else
	{
		printf("Numero de l'inode : \t %d \n", statistiques.st_ino);
		printf("Taille du fichier : \t %d \n", statistiques.st_size);
	
		type_fichier= statistiques.st_mode & 0xF000;
		printf("Type de fichier :\t %x \n", type_fichier);
		droits=statistiques.st_mode & 0x01FF;
		printf("Droits :\t %o\n", droits);
	}
	return 0;
}
