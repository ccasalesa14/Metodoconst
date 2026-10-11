
#include <stdio.h>

int main() {
    int opcion;
    double a, b;

    do {
        printf("\n1. Suma\n2. Resta\n3. Multiplicacion\n4. Division\n5. Salir\n");
        printf("Elige una opcion: ");

        if (scanf("%d", &opcion) != 1) {
            printf("Entrada invalida.\n");
            while (getchar() != '\n');
            continue;
        }

        if (opcion >= 1 && opcion <= 4) {
            printf("Ingresa dos numeros: ");

            if (scanf("%lf %lf", &a, &b) != 2) {
                printf("Entrada invalida.\n");
                while (getchar() != '\n');
                continue;
            }

            if (opcion == 1)
                printf("Resultado: %.17g\n", a + b);
            else if (opcion == 2)
                printf("Resultado: %.17g\n", a - b);
            else if (opcion == 3)
                printf("Resultado: %.17g\n", a * b);
            else if (b == 0)
                printf("Error: division entre cero.\n");
            else
                printf("Resultado: %.17g\n", a / b);

        } else if (opcion != 5) {
            printf("Opcion invalida.\n");
        }

    } while (opcion != 5);

    return 0;
}
