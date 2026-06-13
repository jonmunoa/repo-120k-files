// fichero 50270 -- macros y constantes
#define LIMITE_50270 50370
#define FACTOR_50270 1

int aplicar_limite50270(int valor) {
    if (valor > LIMITE_50270) return LIMITE_50270;
    return valor * FACTOR_50270;
}
