// fichero 14826 -- macros y constantes -- MODIFICADO
#define LIMITE_14826 15026
#define FACTOR_14826 3

int aplicar_limite14826(int valor) {
    if (valor > LIMITE_14826) return LIMITE_14826;
    return valor * FACTOR_14826;
}
