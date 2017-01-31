#include <stdio.h>
#include <stdlib.h>
int a,i,b;
int c[100];
int d = 0;
int z = 0;
int w = 0;
int  x = 0 ;
int q = 0;

int main(){
    printf ("vector \n");
    printf ("cantidad de numeros:");
    scanf ("%d",&a);
    for (i=0; i<a; i++){
        printf ("cual es el numero:");
        scanf ("%d",&b);
        c[i] = b;
        if (b > z){
              q += 1;
              d = d + b;
              }
        else{
             x += 1;
             w = w + b;
             }
             
        }
        
    for (i=0; i<a; i++){
        printf ("%d \n", c[i]);
        }
    printf ("---------------------------------- \n");
    if (q == 0){
          printf ("no hay numeros pocitivos \n");
          }
    if (q > 0){
           printf ("esta es la suma de los numeros: %d \n", d);
          }
    printf ("------------------------------------ \n");
    if (w == 0){
          printf ("no hay numeros negativos \n");
          }
    if (w > 0){
          printf ("esta es la suma de los numeros negativos: %d \n", w);
          }
    printf ("------------------------------ \n");
    
  system("PAUSE");	
  return 0;
}
