#include <stdio.h>
#include <string.h>

int main(){

  int key;
  char mensaje[40];

  printf("Cifrado Ciclico\n");
  printf("Ingrese mensaje a cifrar: \n");
  scanf("%s" ,mensaje);
  printf("Ingrese la llave numerica: \n");
  scanf("%d",&key);
  cifrado(key,mensaje);

	return;
}

void cifrado(int key, char mensaje[]){
    int i;
    for(i=0;i<strlen(mensaje);i++){
       if((mensaje[i]>=65 && mensaje[i]<90) || (mensaje[i]>=97 && mensaje[i]<122)){
         printf("%c",mensaje[i]+key);
       }
    }

}

