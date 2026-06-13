// fichero 13398 -- macros y constantes
#define LIMITE_13398 13498
#define FACTOR_13398 4

int aplicar_limite13398(int valor) {
    if (valor > LIMITE_13398) return LIMITE_13398;
    return valor * FACTOR_13398;
}
