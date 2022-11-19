#include <stdio.h>
#include <math.h>

int main(void)

{ 
	float a;
	float b;
	float c;
	float discri;
	float X1;
	float X2;
	
	/*Demande des valeurs de a, b, et c*/
	printf("Calcul des racines d'une équation du second dégré\n");
	printf("Entrer le coefficient a :\n");
	scanf("%f", &a);
	printf("Entrer le coefficient b :\n");
	scanf("%f", &b);
	printf("Entrer le coefficient c :\n");
	scanf("%f", &c);
	
	/*Calcul discriminant*/
	discri=pow(b,2)-4*a*c;
	
	/*calcul des solutions*/
	if(discri>0)
	{	
		X1=(-b-sqrt(discri))/(2*a);
		X2=(-b+sqrt(discri))/(2*a);
		printf("Les solutions sont : %f et %f\n", X1, X2);
	}
	
	if(discri==0)
	{
		X1=-b/(2*a);
		printf("La solution est : %f\n", X1);
	}
	if(discri<0)
	{
		printf("Pas de solution ! Youpi, on s'arrête là !\n");
	}
	
	return 0;
}
	
	
