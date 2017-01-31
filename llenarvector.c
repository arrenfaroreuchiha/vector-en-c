#include <stdio.h>
#include <stdlib.h>
int a,i;
int b[100];

int main(){
  printf ("llenar un vector \n");
  printf ("cuantos numeros:");
  scanf ("%d",&a);
  for (i=0; i<a; i++){
       printf ("diguita el numero:",i+1);
       scanf ("%d",&b[i]);
      }
  for (i=0; i<a; i++){
      printf ("este es el vector: %d \n",b[i]);
      }
  system("PAUSE");	
  return 0;
}
