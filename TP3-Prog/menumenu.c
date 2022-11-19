#include <stdio.h>

int main(void)

{
    float reelinv;
    float invresult;
    int dividende;
    int diviseur;
    int reste;
    int quotient;
    float w;
    float x;
    float y;
    float z;
    float max1;
    float max2;
    float maximum;
    float min1;
    float min2;
    float minimum;
    char i;
    char d;
    char m;
    char f;
    char repu;
    
    
    printf("Taper :\n - i : Pour calculer l'inverse d'un réel (non nul) \n - d : Pour donner le reste det le quotient de 2 nombres \n - m : Pour donner le minimun et le maximum de 4 nombres. \n-  Pour finir taper f\n");
    scanf("%c", &repu);
    
    do
    {
    switch(repu)
    {
      case 'i' : 
	printf("Nous allons calculer l'inverse d'un réel (non nul) \n Entrer un réel :\n");
	do
	{
	  scanf("%f", &reelinv);
	  if(reelinv==0)
	  {
	    printf("Saisir un nombre différent de 0");
	  }
	    
	}
	while(reelinv==0);
	invresult=1/reelinv;  
	printf("L'inverse de %f est :%f", reelinv, invresult);break;
      case 'd' :
	printf("Nous allons donner le reste et le quotient de 2 nombres \n Entrer le dividende et le diviseur :\n");
	scanf("%d %d", &dividende, &diviseur);
	quotient=dividende/diviseur;
	reste=dividende%diviseur;
	printf("Le quotient est %d et le reste est %d", quotient, reste);break;
      case 'm' :
	printf("Saisir 4 nombres:\n");
	scanf("%f %f %f %f", &w , &x, &y, &z);
    
/*Maximum*/

	max1=(w>x) ? w:x;
	max2=(y>z) ? y:z;
	maximum=(max1>max2) ? max1:max2;
    
/*Minimum*/

	min1=(w<x) ? w:x;
	min2=(y<z) ? y:z;
	minimum=(min1<min2) ? min1:min2;
    
/*Résultats*/

	printf("Le maximum est : %f\n", maximum);
	printf("Le minimum est : %f\n", minimum);break;
      case 'f' :
	printf("Fin du programme\n");
    }
    }
    while(repu!='f');
    
    return 0;
}
    
    
    
    
    
    