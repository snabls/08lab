#include <stdio.h>

int somma(int *a, int n){
    int risultato=0;
    int *i;

    for(i = a; i<a + n; i++){
        risultato += *i;
    }
    return risultato;
}

int massimo(int *a, int n, int *max){
    int *i;

    if(a==NULL || n<=0 || max == NULL){
        return 0;
    }
    *max = *a;
    for(i = a+1; i<a+n; i++){
        if(*i > *max){
            *max = *i;

        }
    }
    return 1;
}

int main(){
    int numeri[] = {3, 7, 2, 9, 4};
    int n = sizeof(numeri) / sizeof(numeri[0]);
    int max;
    printf("Somma: %d\n", somma(numeri, n));
    if(massimo(numeri, n, &max)){
        printf("Max = %d\n", max);
    }
    else{
        printf("Non è stato possibile calcolare il massimo");
    }
    return 0;
}