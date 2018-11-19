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
    char lista[num_criancas];

    for (int i=0; i< num_criancas; i++){
        scanf("%s %s", &lista[i]);
        printf(lista);
    }

    return 0;
}
