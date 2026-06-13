// fichero 3826 -- macros y constantes
#define LIMITE_3826 3926
#define FACTOR_3826 2

int aplicar_limite3826(int valor) {
    if (valor > LIMITE_3826) return LIMITE_3826;
    return valor * FACTOR_3826;
}
