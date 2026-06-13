// fichero 38826 -- macros y constantes
#define LIMITE_38826 38926
#define FACTOR_38826 2

int aplicar_limite38826(int valor) {
    if (valor > LIMITE_38826) return LIMITE_38826;
    return valor * FACTOR_38826;
}
