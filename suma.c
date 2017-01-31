#include <stdio.h>
#include <stdlib.h>
int a,i;
int c=0;
int b[100];

int main(){
    printf ("suma de un vector \n");
    printf ("cantidad de numeros:");
    scanf ("%d",&a);
    for (i=0; i<a; i++){
        printf ("cual es el numero:");
        scanf ("%d",&b[i]);
        c = c + b[i];
        }
  for (i=0; i<a; i++){
      printf ("%d \n", b[i]);
      }
  printf ("esta es la suma del vector: %d \n", c);
  system("PAUSE");	
  return 0;
}
