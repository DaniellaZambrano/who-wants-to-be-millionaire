// Daniella Zambrano
#include <stdio.h>

#include "wwtbm.h"
#include "animaciones.h"

int main()
{

    time_t t;
    srand((unsigned)time(&t));

    system("clear");
    imagen1();
    system("sleep 1.5");
    system("clear");
    imagen2();
    system("sleep 1.5");
    system("clear");
    imagen3();
    system("sleep 1.5");
    imagen4();
    system("sleep 1.5");

    int i, k, m, l, n = 15;
    int j = preguntas;
    int cont = 0;
    int posicion[j];
    char repetidas[4] = {0, 0, 0, 0}, repetidas2[5] = {0, 0, 0, 0, 0};
    int estado[3] = {1, 1, 1};
    LISTA info;

    RecogerInfo("wwtbm.txt", "r+", &info);

    char **lista2 = (char **)calloc(j, sizeof(char *));
    for (i = 0; i < j; i++)
        lista2[i] = calloc(max_char, sizeof(char));

    for (i = 0; i < j; i++)
    {
        Copiar(info.datos[i][0], lista2[i]);
        posicion[i] = i;
    }

    char **respuesta = (char **)calloc(6, sizeof(char *));
    for (i = 0; i < 6; i++)
        respuesta[i] = calloc(max_char, sizeof(char));

    int aciertos = 0;

    if (menu() == 1)
        do
        {
            system("clear");
            system("sleep 1");
            int tomar;
            tomar = rand() % j;
            printf("\nPREGUNTA #%d: %s", aciertos + 1, lista2[tomar]);
            printf("\n");

            Copiar(info.datos[posicion[tomar]][1], respuesta[1]);

            for (m = 0, k = 2; m < 3; m++, k++)
            {
                int asignar;

                do
                {
                    asignar = 2 + rand() % 5;
                } while (Encontrada(asignar, repetidas) == 0);

                repetidas[m] = asignar;
                Copiar(info.datos[posicion[tomar]][asignar], respuesta[k]);
            }

            BolsaAct(lista2, j, tomar);
            BolsaActEntero(posicion, j, tomar);

            printf("\t\t\trespuesta\n\n");

            Copiar("shhh", repetidas2);
            for (m = 0, k = 1; m < 4; m++, k++)
            {
                int sacar;

                do
                {
                    sacar = 1 + rand() % 4;
                } while (Encontrada(sacar, repetidas2) == 0);

                repetidas2[m] = sacar;
                printf("Respuesta #%d: %s\n", m + 1, respuesta[sacar]);
            }

            j--;

            int opc;
            int comodin;
            int aux[2];
            do
            {

                if (estado[0] == 0 && estado[1] == 0 && estado[2] == 0)
                    break;
                printf("\nComodines: ");

                if (estado[0] == 1)
                    printf("1) -Audencia-");
                if (estado[1] == 1)
                    printf("\t2) -50 50-");
                if (estado[2] == 1)
                    printf("\t3) -Llamar a un amigo-");

                printf("\n\n                (Si no quiere comodines presione 0)\n\n");
                scanf("%d", &comodin);

                if (comodin == 1 || comodin == 2 || comodin == 3)
                    Comodines(respuesta, repetidas2, comodin, estado, aux);
            } while (comodin != 0);

            printf("\nOpcion: ");
            scanf("%d", &opc);

            system("clear");
            if (repetidas2[opc - 1] == 1)
            {
                system("sleep 1");
                win();
                system("sleep 3");
                cont++;
                aciertos++;
            }
            else
            {
                system("sleep 1");
                lost();
                system("sleep 3");
                break;
            }

        } while (cont < n);

    if (aciertos == 15)
    {

        system("clear");
        winwin();
        system("sleep 0.5");
        system("clear");
        winWIN();
        system("clear");
        winwin();
        system("sleep 0.5");
        system("clear");
        winWIN();
        system("clear");
        winwin();
        system("sleep 0.5");
        system("clear");
        winWIN();
        system("clear");
        winwin();
        system("sleep 0.5");
        system("clear");
        winWIN();
        system("clear");
        winwin();
        system("sleep 0.5");
        system("clear");
        winWIN();
        system("clear");
        winwin();
        system("sleep 0.5");
        system("clear");
        winWIN();
    }
    return 0;
}
