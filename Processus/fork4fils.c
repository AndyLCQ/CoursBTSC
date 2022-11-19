#include<stdio.h>
#include <unistd.h>

int main (void) 
{
  printf("Bonjour, ici %d !\n", (int)getpid() );
  sleep (4);
  return 6;
}
