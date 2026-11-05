#include <stdio.h>

void incremento(int *n){
    *n+=1;
}


int main(){
    int n = 0;
    int *p = &n;
    printf("Numero prima dell'incremento: %d\n", n);
    incremento(p);
    printf("Numero dopo l'incremento: %d", n);
    return 0;
}