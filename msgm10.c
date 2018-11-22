#include <stdio.h>
#include <string.h>

typedef struct{
    char comportamento[2];
    char nome [21];
}criancas;

void sortNomes(criancas x[], int num_criancas){
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
        printf("%s\n", x[i].nome);
}

void imprimir(criancas x[], int num_criancas){
    int bom = 0;
    int mal = 0;
    for (int i=0; i < num_criancas; i++){
       if (strstr(x[i].comportamento, "+"))
            bom++;
        else
            mal++;
    } printf("Se comportaram: %d | Nao se comportaram: %d\n", bom, mal);
}
int main(){
    int num_criancas;
    scanf("%d", &num_criancas);
    criancas x[num_criancas];

    for (int i=0; i< num_criancas; i++)
        scanf("%s %s", &x[i].comportamento, &x[i].nome);

    sortNomes(x, num_criancas);
    imprimir(x, num_criancas);

    return 0;
}
