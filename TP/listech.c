// le type de donnée est une structure
//le pointeur vers le debut de la liste doit etre declaré avant la declaration de structure

#include<stdio.h>
#include<stdlib.h>

typedef struct pile *pt ;
struct pile {
  int data;
  pt next;
};

int push (pt *d, int data) {
  pt aux = (pt) malloc(sizeof(struct pile));
  aux->data = data;
  aux->next = *d;
  *d = aux;
}


int pop(pt *d){
  int p= (*d)->data;
  *d=(*d)->next;
  return p;



}





int main(int argc, char const *argv[]) {
  int x; int y;
  pt deb = NULL;
  for (int i = 1; i < argc; i++) {
    switch (*argv[i]) {
      case '+':
        x=pop(&deb);
        // printf("%i\n",x );
        y=pop(&deb);
        push(&deb,x+y);
        // printf("%i\n",y);
        // printf("%i\n",TAB[sommet] );
        break;
      case '-':
        x=pop(&deb);
        y=pop(&deb);
        push(&deb,x-y);
        // printf("%i\n",TAB[sommet] );

        break;
      case '*':
        x=pop(&deb);
        y=pop(&deb);
        push(&deb,x*y);
        // printf("%i\n",TAB[sommet] );
        break;
      case '/':
        x=pop(&deb);
        y=pop(&deb);
        push(&deb,x/y);
      // printf("%i\n",TAB[sommet] );
        break;
      default:
        push(&deb,atoi(argv[i]));
        // printf("%i\n",TAB[sommet]);

      }

  }
  printf("%i\n", deb->data);
  return 0;
}
