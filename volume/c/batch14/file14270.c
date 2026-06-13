// fichero 14270 -- macros y constantes
#define LIMITE_14270 14370
#define FACTOR_14270 1

int aplicar_limite14270(int valor) {
    if (valor > LIMITE_14270) return LIMITE_14270;
    return valor * FACTOR_14270;
}
