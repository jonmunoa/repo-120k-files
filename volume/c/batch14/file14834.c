// fichero 14834 -- macros y constantes
#define LIMITE_14834 14934
#define FACTOR_14834 5

int aplicar_limite14834(int valor) {
    if (valor > LIMITE_14834) return LIMITE_14834;
    return valor * FACTOR_14834;
}
