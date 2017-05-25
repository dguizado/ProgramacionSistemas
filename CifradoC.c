#include <stdio.h>
#include <string.h>
void main(){

  int key;
  char mensaje[40];

  printf("Cifrado Ciclico\n");
  printf("Ingrese mensaje a cifrar: \n");
  scanf("%s" ,&mensaje);
  printf("Ingrese la llave numerica: \n");
  scanf("%d" ,&key);
  
  char cifrado(int key, char mensaje[]){
    int i;
    char message;
    for(i=0;i<strlen(mensaje);i++){
      if((key>0) && ((mensaje[i]>=65 && mensaje[i]<90) || (mensaje[i]>=97 && mensaje[i]<122))){
         message=mensaje[i]+key;
         printf("El mensaje cifrado es: ", message); 
       }
      
      else if((key<0) && ((mensaje[i]>=65 && mensaje[i]<90) || (mensaje[i]>=97 && mensaje[i]<122))){
          message=mensaje[i]-key;
          printf("El mensaje cifrado es: ", message);
       }
    }
   
  }
}
