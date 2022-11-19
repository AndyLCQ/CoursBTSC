#include <stdio.h>
#include "ihm.h"
 /*Programme principal*/

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
    
