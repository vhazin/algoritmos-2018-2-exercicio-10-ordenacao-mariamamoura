#include <stdio.h>
#include <string.h>

char nm[3][20], aux[20];

int main(){

for (int i = 0; i < 3; i++) {
   printf("\nNome %i: ", i+1);
   scanf("%s", nm[i]);
}


for (int i = 1; i < 3; i++) { /* 3 = qtde de palavras */
   for (int j = 1; j < 3; j++) {
      // verifica se tem que ser depois, se for troca de posi��o
      if (strcmp(nm[j - 1], nm[j]) > 0) {
         strcpy(aux, nm[j - 1]);
         strcpy(nm[j - 1], nm[j]);
         strcpy(nm[j], aux);
      }
   }
}

// s� mostrar a matriz
for (int i = 0; i < 3; i++)
   printf("\n%s", nm[i]);

   return 0;
}
