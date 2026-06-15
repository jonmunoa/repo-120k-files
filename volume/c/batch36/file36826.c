// fichero 36826 -- macros y constantes -- MODIFICADO
#define LIMITE_36826 37026
#define FACTOR_36826 3

int aplicar_limite36826(int valor) {
    if (valor > LIMITE_36826) return LIMITE_36826;
    return valor * FACTOR_36826;
}
