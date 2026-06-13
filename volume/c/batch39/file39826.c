// fichero 39826 -- macros y constantes
#define LIMITE_39826 39926
#define FACTOR_39826 2

int aplicar_limite39826(int valor) {
    if (valor > LIMITE_39826) return LIMITE_39826;
    return valor * FACTOR_39826;
}
