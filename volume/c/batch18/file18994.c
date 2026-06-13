// fichero 18994 -- macros y constantes
#define LIMITE_18994 19094
#define FACTOR_18994 5

int aplicar_limite18994(int valor) {
    if (valor > LIMITE_18994) return LIMITE_18994;
    return valor * FACTOR_18994;
}
