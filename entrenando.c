#include <stdio.h>
#include <stdlib.h>
int a,b,i;
int d[100];
int c=0;
int e=0;

int main(){
    printf ("vector \n");
    printf ("cantidad de numeros:");
    scanf ("%d",&a);
    for (i=0; i<a; i++){
        printf ("cual es el numero:");
        scanf ("%d",&b);
        c = c + b;
        if (b==2){
                  d[i]=b;
                  e += 1;
                  }
        }
     for (i=0; i<a; i++){
            printf ("%d \n",d[i]);
            }
      printf ("etsa es la suma de los numeros: %d \n ", c);
      while (e>=3){
            printf ("esta es la cantidad de numeros qu hay en el vector:%d \n",e);
            break;
            }
  system("PAUSE");	
  return 0;
}
