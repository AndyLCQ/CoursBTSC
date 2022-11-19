#define MAXPERS 100

typedef struct
{
    float brut;
    float net;
}typsal;

typedef struct
{
    char nom[25];
    char tel[11];
    typsal sal;
}eltpers;
void saisie(eltpers Tab[]);
float SommeNets(eltpers Tab[]);