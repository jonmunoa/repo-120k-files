// fichero 36826 -- macros y constantes
#define LIMITE_36826 36926
#define FACTOR_36826 2

int aplicar_limite36826(int valor) {
    if (valor > LIMITE_36826) return LIMITE_36826;
    return valor * FACTOR_36826;
}
