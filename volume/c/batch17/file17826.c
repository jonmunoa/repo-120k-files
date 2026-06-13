// fichero 17826 -- macros y constantes
#define LIMITE_17826 17926
#define FACTOR_17826 2

int aplicar_limite17826(int valor) {
    if (valor > LIMITE_17826) return LIMITE_17826;
    return valor * FACTOR_17826;
}
