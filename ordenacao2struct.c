#include <stdio.h>
#include <string.h>

typedef struct{
    char comportamento[2];
    char nome [21];
}criancas;

//void sort(struct *char nome[], int num_criancas, char esq, char dir){

//}

//void imprimir(criancas){
  //  int bom, mal;
    //    if (x[i].comportamento == "+ ")
      //      bom++
       // else
         //   mal++
       // printf("Se comportaram: %d| Nao se comportaram: %d", bom, mal);
//}
int main(){
    int num_criancas;
    scanf("%d", &num_criancas);
    criancas x[num_criancas];

    for (int i=0; i< num_criancas; i++)
        scanf("%s %s", &x[i].comportamento, &x[i].nome);
    for (int i=0; i< num_criancas; i++)
        printf("%s %s\n", x[i].comportamento, x[i].nome);
  //  imprimir();

// sort funcionando
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
// fim de sort funcionando

    int bom, mal;
    for (int i=0; i < num_criancas; i++){
       if (x[i].comportamento == "+ ")
            bom++;
        else
            mal++;
    } printf("\nSe comportaram: %d| Nao se comportaram: %d", bom, mal);

    return 0;
    }
