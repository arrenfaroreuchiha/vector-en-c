#include <stdio.h>
#include <stdlib.h>
int a,i,c;
int b[100];
float d;

int main(){
    printf ("promedio \n");
    printf ("cantidad de numeros:");
    scanf ("%d",&a);
    for (i=0; i<a; i++){
        printf ("cual es el numero:");
        scanf ("%d",&b[i]);
        c = c + b[i];
        }
  for (i=0; i<a; i++){
      printf ("%d \n",b[i]);
      }
  printf ("esta es la suma del vector: %d \n", c);
  d = c / a;
  printf ("este es el promedio: %4.2f \n", d);
  system("PAUSE");	
  return 0;
}
