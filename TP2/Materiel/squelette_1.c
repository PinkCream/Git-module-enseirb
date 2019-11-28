#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define STACK_SIZE_MAX 1024

// Instantiation du tableau
 

// Ajouter un élément au tableau
void push(int x)
{

}
 

// Dépiler le dernier élément du tableau
int pop()
{
        
}
 
int main(int argc, const char **argv)
{
  // Lecture des arguments un à un
  for(int i = 1; i < argc; i++){  
    switch(*argv[i])
      {
      case '+':
	{
	  // Dépiler et additionner 
	  
	}
      case '-':
	{
	  // Dépiler et soustraire
	  
	}
      case '*':
	{
	  // Dépiler et multiplier 
	  
	}
      case '/':
	{
	  // Dépiler et diviser 
	}
      default:
	// Cas par défaut : on ajoute l'élément au tableau
	break;
      }
    
  }
  // Afficher le résultat
  printf("");
  return 0;
}
