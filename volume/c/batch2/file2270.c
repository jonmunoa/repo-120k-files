// fichero 2270 -- macros y constantes
#define LIMITE_2270 2370
#define FACTOR_2270 1

int aplicar_limite2270(int valor) {
    if (valor > LIMITE_2270) return LIMITE_2270;
    return valor * FACTOR_2270;
}
