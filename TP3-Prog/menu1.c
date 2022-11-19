#include <stdio.h>

int main(void)

{
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
    
    
/*Saisi des nombres*/

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
   printf("Le minimum est : %f\n", minimum);
    
    return 0;
}
