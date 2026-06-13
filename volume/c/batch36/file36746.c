// fichero 36746 -- macros y constantes
#define LIMITE_36746 36846
#define FACTOR_36746 2

int aplicar_limite36746(int valor) {
    if (valor > LIMITE_36746) return LIMITE_36746;
    return valor * FACTOR_36746;
}
