// Daniella Zambrano
#include "wwtbm.h"

void RecogerInfo(const char *file, const char *read, LISTA *info)
{
    FILE *archivo;
	archivo = fopen(file, read);

	int i, j;
	for (i = 0; i < 21; i++)
		for (j = 0; j < 9; j++)
			fgets(info->datos[i][j], sizeof(info->datos[i][j]), archivo);

	fclose(archivo);
}

void Mostrar(LISTA info)
{
	int i, j;
	for (i = 0; i < 21; i++)
		for (j = 0; j < 9; j++)
		{
			if (j == 0)
				printf("Pregunta #%d: %s", i + 1, info.datos[i][j]);

			else
				printf("Opcion #%d: %s\n", j, info.datos[i][j]);
		}
}

void Mostrar1(char **cosas, int j)
{

	int i;
	for (i = 0; i < j; i++)
		printf("------------ #%d: %s", i + 1, cosas[i]);
}

void Copiar(char *s1, char *s2)
{
    int i;
    int j = 0;

	for (i = 0; s2[i] != '\0'; i++)
		j = s2[i + 1];

	for (i = 0; s1[i] != '\0'; i++)
	{
		s2[j] = s1[i];
		j++;
	}

	s2[j] = '\0';
	return;
}

void BolsaAct(char **a, int n, int val)
{
	char aux[100];

	Copiar(a[val], aux);

	int i;
	for (i = val; i < n - 1; i++)
		Copiar(a[i + 1], a[i]);

	Copiar(aux, a[n - 1]);
	return;
}

void BolsaActEntero(int a[], int n, int val)
{
	int aux = a[val];

	int i;
	for (i = val; i < n - 1; i++)
		a[i] = a[i + 1];

	a[n - 1] = aux;

	return;
}

int Encontrada(int s1, char s2[])
{
	int i;
	for (i = 0; s2[i] != '\0'; i++)
	{
		if (s1 == s2[i])
			return 0;
	}

	return 1;
}

int Comodines(char **respuesta, char *repe, int comodin, int *estado, int *aux)
{
	time_t t;
	srand((unsigned)time(&t));
	
    int i;

	switch (comodin)
	{
        // Audiencia
	    case 1: 
		    if (estado[0] == 0)
		    {
			    printf("Ya usaste ese comodin!!!!");
			    break;
		    }
		    else
		    {
			    int variable = 100;
			    int d = rand() % variable;

			    if (estado[1] == 0)
			    {
				    if (aux[0] + 1 == 1 || aux[1] + 1 == 1)
					    printf("Opcion #1: %d%%    ", d);
				    
                    variable -= d;
				    d = rand() % variable;

				    if (aux[0] + 1 == 2 || aux[1] + 1 == 2)
					    printf("Opcion #2: %d%%    ", d);
				
                    variable -= d;
				    d = rand() % variable;

				    if (aux[0] + 1 == 3 || aux[1] + 1 == 3)
					    printf("Opcion #3: %d%%    ", d);
				
                    variable -= d;
				    d = rand() % variable;

				    if (aux[0] + 1 == 4 || aux[1] + 1 == 4)
					    printf("Opcion #4: %d%%    ", d);
				
                    variable -= d;
			    }
                else
			    {
				    printf("Opcion #1: %d%%    ", d);
				    variable -= d;
				    d = rand() % variable;

				    printf("Opcion #2: %d%%    ", d);
				    variable -= d;
				    d = rand() % variable;

				    printf("Opcion #3: %d%%    ", d);
				    variable -= d;
				    d = rand() % variable;

				    printf("Opcion #4: %d%%     ", d);
				    variable -= d;
			    }

			    estado[0] = 0;
		    }

		    break;

	    case 2:

		    if (estado[1] == 0)
		    {
			    printf("Ya usaste ese comodin!!!!");
			    break;
		    }
		    else
		    {
			    for (i = 0; i < 4; i++)
				    if (repe[i] == 1)
					    aux[0] = i;

			    do
			    {
			        aux[1] = 1 + rand() % 3;
			    } 
                while (aux[1] == aux[0]);

			    if (aux[0] < aux[1])
			    {
				    printf("\nRespuesta #%d: %s", aux[0] + 1, respuesta[repe[aux[0]]]);
				    printf("\nRespuesta #%d: %s", aux[1] + 1, respuesta[repe[aux[1]]]);
			    }
			    else
			    {
				    printf("\nRespuesta #%d: %s", aux[1] + 1, respuesta[repe[aux[1]]]);
				    printf("\nRespuesta #%d: %s", aux[0] + 1, respuesta[repe[aux[0]]]);
			    }

			    estado[1] = 0;
			    break;
		    }


    	case 3:
	    	if (estado[2] == 0)
		    {
			    printf("Ya usaste ese comodin!!!!");
			    break;
		    }
		    else
		    {
			    printf("Yo creo que la respuesta es la opcion: %d\n", 1 + rand() % 4);
			    estado[2] = 0;
		    }
		    break;

        default:
            break;
	}
}
