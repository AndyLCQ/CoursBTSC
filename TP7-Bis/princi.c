#include <stdio.h>
#include "application.h"
#include "ihm.h"


int main()
{
    char choix;
    do
    {
      choix=menu();
      traitechoix(choix);
    }
    while(choix !='f');
    return 0;
}