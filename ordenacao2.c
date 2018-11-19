#include <stdio.h>

void trocar(int *num1, int *num2){
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

//int particionar(lista[], int esq, int dir){

//}

//void quickSort(lista[], int esq, int dir){

//}

//void imprimir(lista[], int size){

//}

int main(){
    int num_criancas;
    scanf("%d", &num_criancas);
    char nome_criancas[num_criancas], comportamento[5];
    char lista[num_criancas][2];

    for (int i=0; i< num_criancas; i++){
        scanf("%s %s", &comportamento[i], &nome_criancas[i]);
        lista[i][0] = comportamento[i];
        lista[i][1] = nome_criancas[i];

    } printf(lista);

    return 0;
}
