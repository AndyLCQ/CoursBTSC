#include <stdio.h>

int main(void)

{
    float w;
    float x;
    float y;
    float z;
    float max1;
    float max2;
    float min1;
    float min2;
    
    
/*Saisi des nombres*/

    printf("Saisir 4 nombres:\n");
    scanf("%f %f %f %f", &w , &x, &y, &z);
    
/*Maximum*/

    max1=(w>x) ? w:x;
    max2=(y>z) ? y:z;
    
/*Minimum*/

    min1=(w<x) ? w:x;
    min2=(y<z) ? y:z;
    
/*Résultats*/

    if(max1>max2)
    {
	printf("Le maximum est : %f\n", max1);
    }
    else 
    {
	printf("Le maximum est : %f\n", max2);
    }
    
    
    if(min1<min2)
    {
	printf("Le minimum est : %f\n", min1);
    }
    else 
    {
	printf("Le minimum est : %f\n", min2);
    }
    
    return 0;
}
