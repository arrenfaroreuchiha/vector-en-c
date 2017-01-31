#include <stdio.h>
#include <stdlib.h>
int d[100];
int a,i,b;
int c=0;
int z=2;

int main(){
    printf ("vector con numeros primos \n");
    printf ("cantidad de numeros que va inglesar:");
    scanf ("%d",&a);
    for (i=0; i<a; i++){
        printf ("cual es el numero:");
        scanf ("%d",&b);
        c = b % z;
        if (c==0){
                  d[i] = b;
                  printf ("el numero es primo \n");
                  printf ("------------------------ \n");
                  }
        else{
             printf ("el numero no es primo \n");
             printf ("-------------------------- \n");
             }
        }
    for (i=0; i<a; i++){
        printf ("%d \n", d[i]);
        }
  
  system("PAUSE");	
  return 0;
}
