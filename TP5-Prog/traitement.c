#define NBELEVES 2
#define NBNOTES 4
float moyenne (float Notes[][NBNOTES], float Moy[])
{
    float moyen;
    float add=0;
    int compteur;
    int compteur2;
    
    for(compteur=0;compteur<NBELEVES;compteur++)
    {
    	for(compteur2=0;compteur2<NBNOTES;compteur2++)
    	{
    	   	add=add+Notes[compteur][compteur2];
    	}
    }
    moyen=add/NBELEVES;
    return moyen;
}

/***************************************************************************************************************************************/
