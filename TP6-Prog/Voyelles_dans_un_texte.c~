#inculde <stdio.h>

int main()
{
  int v[6];	/*tableau de 6 entier destiné a contenir les fréquences des 6 voyelles */
  char c;
  int i;	/*compteur de boucle*/
  
  for(i=0;i<6;i++)
  {
    v[i]=0;
  }
  printf("Le programme compte les voyelles dans ce que vous avez saisi.\n");
  printf("Entrez un texte. Finir par la touche '*' puis entrée : \n");
  
  do
  {
     c=getchar();	/*saisie du caractère en tête de la file après l'appuies sur entrée*/
     
     switch(c)
     {
	
	case 'a' : v[0]=v[0]+1 ;break;
	case 'e' : v[1]=v[1]+1 ;break;
	case 'i' : v[2]=v[2]+1 ;break;
	case 'o' : v[3]=v[3]+1 ;break;
	case 'u' : v[4]=v[4]+1 ;break;
	case 'y' : v[5]=v[5]+1 ;break;
	default :;
	
      }
      while(c!='*');
      
      printf("\nFréquence des voyelles:\n\n");
      printf("a\te\ti\to\ty\n");
      printf(" %d\t%d\t%d\t%d\t%d\t%d\t", v[0], v[1], v[2]; v[3], v[4], v[5]); 
      
      return 0;
  }