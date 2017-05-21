#include <stdio.h>
#include <string.h>

main()
{
  int key=0;
  int i=0;
  char mensaje[40];

  printf("Cifrado Ciclico\n");
  printf("Ingrese mensaje a cifrar: \n");
  scanf("%s" ,mensaje);
  printf("Ingrese la llave numerica: \n");
  scanf("%i" ,key);
  
  char cifrado(int key, char mensaje[]){
  	for (i=0; i < strlen(mensaje); i++){
  	   if(mensaje [i] >= 'a' && mensaje [i] <= 'z'){
             if (mensaje [i] +key > 'z'){
                return mensaje [i] = 'a' - 'z' + mensaje [i] + key - 1;
             } else if (mensaje [i] + key < 'a'){
                return mensaje [i] = 'z' - 'a' + mensaje [i] + key + 1;
             } else {
                return mensaje [i] += key;
             }
           } else if (mensaje [i] >= 'A' && mensaje [i] <= 'Z') {
              if (mensaje [i] + key > 'Z') {
                 return mensaje [i] = 'A' - 'Z' + mensaje [i] + key - 1;
              } else if (mensaje [i] + key < 'A') {
                 return mensaje [i] = 'Z' - 'A' + mensaje [i] + key + 1;
              } else {
                 return mensaje [i] += key;
              }
        }
  }       
}            
}
