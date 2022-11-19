#include <stdlib.h>
#include <stdio.h>

#define N 6
// liste d'adjacence
struct cellule
{
 	int noeud;
 	struct cellule * suivant;
};

typedef struct cellule * GRAPHEL[N];

// matrice d'adjacence
typedef int GRAPHEM[N][N];


void creerGrapheL(GRAPHEL g)
{
	int i;
	for(i=0;i<N;i++)
		g[i] = NULL;
}

void creerGrapheM(GRAPHEM g)
{
	int i,j;
	for(i=0;i<N;i++)
		for(j=0;j<N;j++)
			g[i][j] = 0;
}

void afficheGrapheM(GRAPHEM g){
	int i,j;
	for(i=0;i<N;i++){
		for(j=0;j<N;j++)
			printf("%d ",g[i][j]);
		printf("\n");
		}
	printf("\n");
}

void afficheGrapheL(GRAPHEL g){
	int i;
	struct cellule * tmp;
	for(i=0;i<N;i++){
		tmp = g[i];
		while (tmp != NULL){
			printf("%d->%d\n",i+1,tmp->noeud+1);
			tmp = tmp->suivant;
		}
	}
}
void ajoutArcL(GRAPHEL g, int i, int j){
	struct cellule *tmp;
	tmp = malloc(sizeof(struct cellule));
	tmp->noeud = j -1;
	tmp->suivant = g[i-1];
	g[i-1] = tmp;
}
void ajoutArcM(GRAPHEM graph,  int i, int j){
	graph[i-1][j-1] = 1 ;	
}
void supprimerArcM(GRAPHEM graph,  int i, int j){
	graph[i-1][j-1] = 0 ;
}
void supprimerArcL (GRAPHEL g, int i, int j){

		struct cellule * listeASupprimer;
		struct cellule * listeActuellePointee = g[i-1];
		if(listeActuellePointee->noeud == j-1) //Le premier placement du pointeur est sur le premier élement de la liste  
		{
			listeASupprimer = g[i-1] ; //On met l'element dans un type Liste pour liberer la memoire plus tard
			g[i-1] = g[i-1]->suivant; //Prend l'adresse qui pointe vers l'element suivant (contenu dans *liste->suivant)			
		}
		else //Sinon un autre élement de la liste
		{
			while(listeActuellePointee->suivant != NULL && listeActuellePointee->suivant->noeud != j-1) //Tant que l'on est pas à la fin ou que l'on est pas à la case voulue
			{
				listeActuellePointee = listeActuellePointee->suivant; //On passe à l'élement suivant
			}
				//On sort quand on est à la fin de la liste ou l'element à le numero demandé
			if(listeActuellePointee->suivant->noeud ==j-1)
			{
				listeASupprimer	= listeActuellePointee->suivant; //met la liste actuelle a supprimer
				if(listeActuellePointee->suivant->suivant != NULL)
				{

					listeActuellePointee->suivant = listeActuellePointee->suivant->suivant; //on fait pointer sur l'element suivant
				}
				else
				{
					
					listeActuellePointee->suivant = NULL; //on fait pointer sur l'element suivant
				}
				
			}
		}
		free(listeASupprimer); //Liberation de la mémoire
	
}
int testerArcM(GRAPHEM graph, int i, int j)
{
	return graph[i-1][j-1];
}
int testerArcL(GRAPHEL graph, int i, int j){
	struct cellule * tmp = graph[i-1];
	while ((tmp != NULL) && (tmp->noeud != j-1))
		tmp=tmp->suivant;
	if (tmp == NULL)
		return 0;
	else
		return 1;
	
}
void rechercherSuccM(GRAPHEM graph, int i)
{
	int j;
	printf("%d -> ",i);
	for(j = 1; j <= N; j++)
	{
		if(testerArcM(graph, i, j) ==1)
			printf("%d ", j);
	}
	printf("\n");
}
void rechercherSuccL(GRAPHEL graph, int i)
{
	int j;
	printf("%d -> ",i);
	for(j = 1; j <= N; j++)
	{
		if(testerArcL(graph, i, j) ==1)
			printf("%d ", j);
	}
	printf("\n");
}
void rechercherSuccL2(GRAPHEL graph, j)
{
	
}
void rechercherPredM(GRAPHEM, j){
	int i;
	printf("%d -> ",j);
	for(i = 1; i <= N; i++)
	{
		if(testerArcM(graph, i, j) ==1)
			printf("%d ", i);
	}
	printf("\n");
}

/**
  * Programme principal
  */
int main()
{
	GRAPHEL gl;

	GRAPHEM gm;

	printf("CREATION\n");
	creerGrapheL(gl);
	creerGrapheM(gm);
	ajoutArcL(gl,1,2);
	ajoutArcM(gm,1,4);
	ajoutArcM(gm,1,2);
	printf("Successeur\n");
	rechercherSuccM(gm, 1);

	printf("GM\n");
	afficheGrapheM(gm);
	printf("GL\n");
	afficheGrapheL(gl);
	printf("Test : %d\n",testerArcL(gl, 1, 1));
	supprimerArcL(gl, 1, 2);
	printf("GL\n");
	afficheGrapheL(gl);
	return 0;
}
