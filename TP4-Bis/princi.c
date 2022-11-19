#include <stdio.h>
#include "application.h"


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