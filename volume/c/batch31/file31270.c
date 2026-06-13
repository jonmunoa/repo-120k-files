// fichero 31270 -- macros y constantes
#define LIMITE_31270 31370
#define FACTOR_31270 1

int aplicar_limite31270(int valor) {
    if (valor > LIMITE_31270) return LIMITE_31270;
    return valor * FACTOR_31270;
}
