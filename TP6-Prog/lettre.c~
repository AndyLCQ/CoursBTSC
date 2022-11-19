#include <stdio.h>

int main()
{
  int l[26];	/*tableau de 26 entiers destiné a contenir les fréquences des 26 lettres */
  char Lettre;
  int i;	/*compteur de boucle*/
  
  for(i=0;i<26;i++)
  {
    l[i]=0;
  }
  printf("Le programme compte les lettres dans ce que vous avez saisi.\n");
  printf("Entrez un texte. Finir par la touche '*' puis entrée : \n");
  
  do
  {
     Lettre=getchar();	/*saisie du caractère en tête de la file après l'appuies sur entrée*/
     
     i=Lettre -97;
     l[i]=l[i]+1;
     
  }
  while(Lettre!='*');
      
  for(i=0;i<26;i++)
  {
      printf("%c : %d\n", 97+i, l[i]);
  }
      
      return 0;
  }