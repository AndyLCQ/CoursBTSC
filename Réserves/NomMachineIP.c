#include <netdb.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <arpa/inet.h>

int main()
{
	char *ChaineIP;
	struct hostent * hp;
	char Machine[100];
	
	
	printf("Nom de la machine :\n");
	scanf("%s",&Machine[0]);
	getchar();
	hp= gethostbyname(Machine);
	
	if(hp == 0)
	{
		perror("Erreur 569 ");
		exit(1);
	}
	
	ChaineIP= inet_ntoa(*(struct in_addr*)hp->h_addr);
	
	printf("@IP Machine:\t %s\n", ChaineIP);
	return 0;
}
