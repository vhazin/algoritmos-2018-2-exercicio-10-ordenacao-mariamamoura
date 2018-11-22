#include <stdio.h>
#include <string.h>

typedef struct{
    char comportamento[2];
    char nome [21];
}criancas;

int main(){
    int num_criancas;
    scanf("%d", &num_criancas);
    criancas x[num_criancas];

    for (int i=0; i< num_criancas; i++)
        scanf("%s %s", &x[i].comportamento, &x[i].nome);
    for (int i=0; i< num_criancas; i++)
        printf("%s %s\n", x[i].comportamento, x[i].nome);
  //  imprimir();

 //  char matriz[num_criancas][30], temp[30];

  //  for (int i=0; i< num_criancas; i++)
   //        matriz[i]== x[i].nome;

   char temp[30];

    for (int i=1; i< num_criancas; i++){
        for (int j=1; j<num_criancas; j++)
            if (strcmp(x[j-1].nome, x[j].nome) >0){
                strcpy(temp, x[j-1].nome);
                strcpy(x[j-1].nome, x[j].nome);
                strcpy(x[j].nome, temp);
            }
    }
    for (int i=0; i<num_criancas; i++)
        printf("\n%s", x[i].nome);

    return 0;
    }
