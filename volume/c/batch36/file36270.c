// fichero 36270 -- macros y constantes
#define LIMITE_36270 36370
#define FACTOR_36270 1

int aplicar_limite36270(int valor) {
    if (valor > LIMITE_36270) return LIMITE_36270;
    return valor * FACTOR_36270;
}
