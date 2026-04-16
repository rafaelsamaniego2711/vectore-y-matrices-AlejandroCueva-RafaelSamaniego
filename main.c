#include <stdio.h>

int main () {

    float notas[5][3];
    float promestudiantes[5], promasignaturas[3];
    float maxasig[3], minasig[3];
    float maxest[5], minest[5];
    int aprobados[3] = {0, 0, 0};
    int reprobados[3] = {0, 0, 0};

    printf ("--------Sistema de calificaciones--------\n");

    for (int j = 0; j < 3; j++) {
        printf ("\nSeleccione la materia deseada: ");
        switch (j) {
            case 0: printf ("matematica\n"); break;
            case 1: printf ("lenguaje\n"); break;
            case 2: printf ("computacion\n"); break;

            float sumacol = 0;
            maxasig[j] = -1;
            minasig[j] = 11;

            for (int i = 0; i < 5; i++) {
                float temp;
                do {
                    printf ("Ingrese la nota del estudiante: ", i + 1);
                    scanf ("%f", &temp);
                    if (temp < 0 || temp > 10)
                        printf ("Error la nota debe estar en el rango de 0-10.\n");
                }   while (temp < 0 || temp > 10);

                

    

