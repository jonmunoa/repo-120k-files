// fichero 11746 -- macros y constantes
#define LIMITE_11746 11846
#define FACTOR_11746 2

int aplicar_limite11746(int valor) {
    if (valor > LIMITE_11746) return LIMITE_11746;
    return valor * FACTOR_11746;
}
