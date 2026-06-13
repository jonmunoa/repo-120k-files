// fichero 12270 -- macros y constantes
#define LIMITE_12270 12370
#define FACTOR_12270 1

int aplicar_limite12270(int valor) {
    if (valor > LIMITE_12270) return LIMITE_12270;
    return valor * FACTOR_12270;
}
