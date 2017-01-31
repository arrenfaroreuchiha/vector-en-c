#include <stdio.h>
#include <stdlib.h>
int a,i;
int b[100];

int main(){
    printf ("\n CODIGO PARA ORDENAR DE MENOR A MAYOR \n");
    printf ("cantidad de numeros:");
    scanf ("%d",&a);
    for (i=0; i<a; i++){
        printf ("cual es el numero:");
        scanf("%d",&b[i]);
        sort();
        }
    for (i=0; i<a; i++){
        printf ("\n %d",b);
        }
      
  
  system("PAUSE");	
  return 0;
}
