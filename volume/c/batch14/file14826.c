// fichero 14826 -- macros y constantes
#define LIMITE_14826 14926
#define FACTOR_14826 2

int aplicar_limite14826(int valor) {
    if (valor > LIMITE_14826) return LIMITE_14826;
    return valor * FACTOR_14826;
}
