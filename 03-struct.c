#include <stdio.h>

typedef struct{
    int matricola;
    float media;
    int n_esami;
}Studente;

void stampa_studente(Studente *s){
    printf("Matricola: %d\nMedia: %.2f\n",
    s->matricola, s->media);
}

void aggiorna_media(Studente *s, float nuovo_voto){
    s->media = ((s->media * s->n_esami) +nuovo_voto) / (s->n_esami+1);
    s->n_esami = s->n_esami + 1;
}

void seleziona_studente(Studente **selezionato, Studente *nuovo){
    *selezionato = nuovo;
}
int main(void){
    Studente s1 = {1001, 26.5f, 2};
    Studente s2 = {1002, 28.0f, 4};
    Studente *selezionato = &s1;

    printf("Attualmente selezionato:\n");
    stampa_studente(selezionato);
    aggiorna_media(selezionato, 27.5);
    printf("Dopo aggiornamento:");
    stampa_studente(selezionato);
    seleziona_studente(&selezionato, &s2);
    printf("Dopo nuovo selezionato:\n");
    stampa_studente(selezionato);
    return 0;
}