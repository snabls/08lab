#include <stdio.h>

void swap(int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void min_max(int a, int b, int *min, int *max){
    if(a>b){
        *max = a;
        *min = b;
    }else{
        *max = b;
        *max = a;
    }
}
int main(void){
    int a = 12;
    int b = 42;
    int min, max;

    printf("Prima dello scambio: a=%d b=%d\n", a, b);
    swap(&a, &b);
    printf("Dopo lo scambio: a=%d b=%d\n", a, b);
    min_max(a, b, &min, &max);
    printf("Min = %d\nMax = %d", min, max);
    return 0;
}