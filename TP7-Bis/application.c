#include <stdio.h>
#include "application.h"



/****************************************************************************************************************************************/
void Quotrest(int nb1, int nb2, int *quo, float *res)
{
    *quo=nb1/nb2;
    *res=nb1%nb2;
}


/****************************************************************************************************************************************/
void Minmax(float a, float b, float c, float d,float *minii, float *maxii)
{
    float mini1;
    float mini2;
    float max1;
    float max2;
    
    mini1=(a<b)?a:b;
    mini2=(c<d)?c:d;
    *minii=(mini1<mini2)?mini1:mini2;
    
    max1=(a>b)?a:b;
    max2=(c>d)?c:d;
    *maxii=(max1>max2)?max1:max2;
}    

/*****************************************************************************************************************************************/

float Inverse(float Nombre)
{
    float resultat;
    resultat=(1/Nombre);
    return resultat;
}