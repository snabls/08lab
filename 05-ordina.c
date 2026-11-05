#include <stdio.h>

/**
 * Funzione ausiliaria per scambiare il valore di due interi
 */
void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

/**
 * Ordina tre numeri interi puntati da a, b e c in ordine crescente.
 * Al termine: *a <= *b <= *c.
 */
void ordina_tre(int *a, int *b, int *c) {
    if (*a > *b) {
        swap(a, b);
    }
    if (*a > *c) {
        swap(a, c);
    }
    if (*b > *c) {
        swap(b, c);
    }
}

int main(void) {
    /*Caso 1: Valori completamente disordinati (ordine decrescente)*/
    int n1 = 42, n2 = 17, n3 = 3;
    printf("--- Test 1: Disordinati ---\n");
    printf("Prima:    n1 = %d, n2 = %d, n3 = %d\n", n1, n2, n3);
    ordina_tre(&n1, &n2, &n3);
    printf("Dopo:     n1 = %d, n2 = %d, n3 = %d\n\n", n1, n2, n3);

    /*Caso 2: Valori con duplicati (due uguali)*/ 
    n1 = 20;
    n2 = 5;
    n3 = 20;
    printf("--- Test 2: Due valori uguali ---\n");
    printf("Prima:    a = %d, b = %d, c = %d\n", n1, n2, n3);
    ordina_tre(&n1, &n2, &n3);
    printf("Dopo:     a = %d, b = %d, c = %d\n\n", n1, n2, n3);

    /*Caso 3: Tutti e tre i valori identici*/ 
    n1 = 7;
    n2 = 7;
    n3 = 7;
    printf("--- Test 3: Tre valori uguali ---\n");
    printf("Prima:    x = %d, y = %d, z = %d\n", n1, n2, n3);
    ordina_tre(&n1, &n2, &n3);
    printf("Dopo:     x = %d, y = %d, z = %d\n\n", n1, n2, n3);

    /*Caso 4: Minimo centrale*/ 
    n1 = 15;
    n2 = -4;
    n3 = 8;
    printf("--- Test 4: Con negativi e minimo al centro ---\n");
    printf("Prima:    p = %d, q = %d, r = %d\n", n1, n2, n3);
    ordina_tre(&n1, &n2, &n3);
    printf("Dopo:     p = %d, q = %d, r = %d\n", n1, n2, n3);

    return 0;
}