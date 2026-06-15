// fichero 13398 -- macros y constantes -- MODIFICADO
#define LIMITE_13398 13598
#define FACTOR_13398 5

int aplicar_limite13398(int valor) {
    if (valor > LIMITE_13398) return LIMITE_13398;
    return valor * FACTOR_13398;
}
