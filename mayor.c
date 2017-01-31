#include <stdio.h>
#include <stdlib.h>
int a,i;
int b[100];
int c=0;
int d=0;

int main(){
    printf ("\n MAYOR Y MENOR DE UN NUMERO EN UN VECTOR \n");
    printf ("cantidad de numeros:");
    scanf ("%d",&a);
    for (i=0; i<a; i++){
        printf ("cual es el numero:");
        scanf ("%d",&b[i]);
        }
    for (i=0; i<a; i++){
        printf ("%d \n", b[i]);
        }
    for (i=0; i<a; i++){
        if (b[i]>c){
                   c=b[i];
                   }
        }
    printf ("este es el numero mayor: %d \n", c);
    for (i=0; i<a; i++){
        if (i==0){
                 d=b[i];
                 }
        if (b[i]<d){
                    d=b[i];
                    }
        }
       
    printf ("este es el numero menor: %d \n",d);
  
  system("PAUSE");	
  return 0;
}
