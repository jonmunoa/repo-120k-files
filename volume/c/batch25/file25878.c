// fichero 25878 -- macros y constantes
#define LIMITE_25878 25978
#define FACTOR_25878 4

int aplicar_limite25878(int valor) {
    if (valor > LIMITE_25878) return LIMITE_25878;
    return valor * FACTOR_25878;
}
