// fichero 5826 -- macros y constantes
#define LIMITE_5826 5926
#define FACTOR_5826 2

int aplicar_limite5826(int valor) {
    if (valor > LIMITE_5826) return LIMITE_5826;
    return valor * FACTOR_5826;
}
