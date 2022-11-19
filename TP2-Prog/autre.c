#include <stdio.h>

int main(void)

{
	int X,Y,Z;
	int tampon;
	
	printf("Kikou, donne la valeur de X ou je te tape");
	scanf("%d", &X);
	printf("encore une fois pour Y");
	scanf("%d", &Y);
	printf("une dernière fois pour Z");
	scanf("%d", &Z);
	
	tampon=Z;
	Z=Y;
	Y=X;
	X=tampon;
	
	printf("La valeur de X est :%d, la valeur de Y est : %d, et la valeur de Z est %d\n",X,Y,Z);
	
	return 0;
	
}
	
