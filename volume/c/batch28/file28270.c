// fichero 28270 -- macros y constantes
#define LIMITE_28270 28370
#define FACTOR_28270 1

int aplicar_limite28270(int valor) {
    if (valor > LIMITE_28270) return LIMITE_28270;
    return valor * FACTOR_28270;
}
