/*
Universidade Presbiteriana Mackenzie
Ciência da Computação
Projeto e Análise de Algoritmos II

Diego Guedes de Moraes - 32148127

20/10/2022

*/

    //A={(3,5),(0,6),(5,9),(2,13),(6,10),(3,8),(1,4),(5,7),(12,14), (8,12),(8,11)}

#include <stdio.h>
#include <stdlib.h> //includes calloc

typedef struct{
    int s,f;
}tAtividade;

tAtividade* selecaoAtividades(tAtividade A[], int N);
bubbleSort(tAtividade A[], int N);

int main(){
    
    tAtividade A = {(3,5),(0,6),(5,9),(2,13),(6,10),(3,8),(1,4),(5,7),(12,14), (8,12),(8,11)};
    tAtividade temp = A[0];
    int N = 11;

    /*    
    A[0] = A[1];
    A[1] = temp;
    printf("s = %d | f = %d\n", A[0].s, A[0].f);
    */
    tAtividade *S = selecaoAtividades(A, N);
    
    return 0;
}

tAtividade* selecaoAtividades(tAtividade A[], int N){
    bubbleSort(A,N);
    
    tAtividade *S;
    int i = 0;
    while(i < n){
        S.s = A[i].s;
        for(int j = 1; j < n; j++){
            if(A[j].s >= A[i].f){
                S.s = A[j].s
                i = j;
            }
        }
    }
    return S;
};

bubbleSort(tAtividade A[], int N){
    for(int k=0; k<n; k++){
        for(int i=0;i<n-k;i++){
            if(A[i].f > A[i+1].f){
                tAtividade temp = A[i];
                A[i] = A[i+1];
                A[i+1] = temp;
            }
        }
    }
};
