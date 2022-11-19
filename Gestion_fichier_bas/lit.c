#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    char Tampon[1000]={0};
    char Fichier_n[20];
    int desc;
    int lonng;
    
    /*Saisie du nom du fichier a lire*/
    printf("Saisir le nom de fichier a lire :\n");
    scanf("%s",Fichier_n);
    
    /*ouverture du fichier a lire*/
    desc=open(Fichier_n, O_RDONLY);
    if(desc==-1)
    {
	perror("Erreur d'ouverture");
	exit(1);
    }
    
    /*Lecture du fichier*/
    read(desc, Tampon, 1000);
    lonng=strlen(Tampon);
    /*Affichage*/
    printf("Nombre de caractere: %d\n", lonng);
    printf("Votre texte : \n\t%s\n", Tampon);
    close(desc);

    return 0;
}    