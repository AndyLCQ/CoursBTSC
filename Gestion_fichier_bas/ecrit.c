#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int des;
	int lonng;
	char Fichier_n[20];
	char EntrerText[1000];
	
	/*Saisie du nom de fichier*/
	printf("Saisir le nom de fichier a saisir :\n");
	scanf("%s",Fichier_n);

	/*Ouverture du fichier*/
	des=open(Fichier_n, O_WRONLY |O_TRUNC);
	if(des==-1)
	{
		perror("ERREUR\n");
		exit(1);
	}
	getchar();
	
	/*Saisie du texte dans le fichier*/
	printf("Entrer votre texte :\n");
	scanf("%[^\n]", EntrerText);
	lonng=strlen(EntrerText);
	
	write(des, EntrerText, lonng);
	close(des);
	
	return 0;
}
	
	
