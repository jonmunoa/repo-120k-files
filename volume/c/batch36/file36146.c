// fichero 36146 -- macros y constantes
#define LIMITE_36146 36246
#define FACTOR_36146 2

int aplicar_limite36146(int valor) {
    if (valor > LIMITE_36146) return LIMITE_36146;
    return valor * FACTOR_36146;
}
