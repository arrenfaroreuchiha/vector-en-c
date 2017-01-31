#include <stdio.h>
#include <stdlib.h>
int a,c,i;
int b[100];

int main(){
    printf ("vector \n");
    printf ("cantidad:");
    scanf ("%d",&a);
    for (i=0; i<a; i++){
        printf ("cual es el numero:");
        scanf ("%d",&b[i]);
        }
    for (i=0; i<a; i++){
        printf ("%d \n",b[i]);
        }
  system("PAUSE");	
  return 0;
}
