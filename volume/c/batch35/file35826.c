// fichero 35826 -- macros y constantes
#define LIMITE_35826 35926
#define FACTOR_35826 2

int aplicar_limite35826(int valor) {
    if (valor > LIMITE_35826) return LIMITE_35826;
    return valor * FACTOR_35826;
}
