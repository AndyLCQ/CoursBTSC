
float Inverse(float Nombre)
{
    float resultat;
    resultat=(1/Nombre);
    return resultat;
}

/****************************************************************************************************************************************/

int Quotient(int nb1, int nb2)
{
    int resultat;
    resultat=nb1/nb2;
    return resultat;
}


/****************************************************************************************************************************************/

int Reste(int nb1, int nb2)
{
    int resultat;
    resultat=nb1%nb2;
    return resultat;
}

/****************************************************************************************************************************************/

float Minimum(float a, float b, float c, float d)
{
    float mini1;
    float mini2;
    float Mini;
    mini1=(a<b)?a:b;
    mini2=(c<d)?c:d;
    Mini=(mini1<mini2)?mini1:mini2;
    
    return Mini;
}
/****************************************************************************************************************************************/

float Maximum(float a, float b, float c, float d)
{
    float max1;
    float max2;
    float Max;
    max1=(a>b)?a:b;
    max2=(c>d)?c:d;
    Max=(max1>max2)?max1:max2;
    
    return Max;
}

