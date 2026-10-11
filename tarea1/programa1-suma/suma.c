#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    double a = 0.1, b = 0.2;

    if (argc == 3) {
        a = atof(argv[1]);
        b = atof(argv[2]);
    } else if (argc != 1) {
        printf("Uso: ./suma [numero1 numero2]\n");
        return 1;
    }

    printf("%.17g\n", a + b);

    return 0;
}
