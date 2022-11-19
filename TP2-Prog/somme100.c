#include <stdio.h>

int main(void)

{
	int Somme=0;
	int I=1;
	
	do
	{
		Somme=Somme+I;
		I=I+1;
	}
	while(I<=100);
		printf("La somme des 100 premiers entiers est : %d\n",Somme);
	
	return 0;
}
