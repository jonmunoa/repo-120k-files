// fichero 49826 -- macros y constantes
#define LIMITE_49826 49926
#define FACTOR_49826 2

int aplicar_limite49826(int valor) {
    if (valor > LIMITE_49826) return LIMITE_49826;
    return valor * FACTOR_49826;
}
