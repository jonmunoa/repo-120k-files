// fichero 22270 -- macros y constantes
#define LIMITE_22270 22370
#define FACTOR_22270 1

int aplicar_limite22270(int valor) {
    if (valor > LIMITE_22270) return LIMITE_22270;
    return valor * FACTOR_22270;
}
