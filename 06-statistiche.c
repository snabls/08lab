#include <stdio.h>

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

int minimo(int *a, int n, int *min){
    int *i;

    if(a==NULL || n<=0 || min == NULL){
        return 0;
    }
    *min = *a;
    for(i = a+1; i<a+n; i++){
        if(*i < *min){
            *min = *i;

        }
    }
    return 1;
}

int media(int *a, int n, float *media){
    int *i;
    int somma = 0;
    if(a==NULL || n<=0 || media == NULL){
        return 0;
    }
    for(i=a+1; i<a+n; i++){
        somma += *i;
    }
    *media = somma / n;
    return 1;
}

int main(){
    int num[] = {2, 2, 4, 16};
    int max, min;
    float avg;
    int n = sizeof(num) / sizeof(num[0]);
    if(massimo(num, n, max)){
        printf("Massimo: %d\n", max);
    }else{
        printf("Impossibile calcolare il massimo");
    }

    if(minimo(num, n, min)){
        printf("Minimo: %d\n", min);
    }else{
        printf("Impossibile calcolare il minimo");
    }
    if(media(num, n, media)){
        printf("Media: %.2f\n", avg);
    }else{
        printf("Impossibile calcolare il massimo");
    }
    return 0;
}

