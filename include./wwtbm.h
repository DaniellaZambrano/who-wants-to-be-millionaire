// Daniella Zambrano
#ifndef _WWTBM_H
#define _WWTBM_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define preguntas 21
#define respuestas 9
#define max_char 100

typedef struct
{
    char datos[preguntas][respuestas][max_char];
} 
LISTA;

void RecogerInfo(const char *, const char *, LISTA *);
void Mostrar(LISTA info);
void Mostrar1(char **cosas, int j);
void Copiar(char *s1, char *s2);
void BolsaAct(char **a, int n, int val);
void BolsaActEntero(int a[], int n, int val);
int Encontrada(int, char[]);
int Comodines(char **respuesta, char *repe, int comodin, int *estado, int *aux);

#endif
