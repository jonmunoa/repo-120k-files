// fichero 32826 -- macros y constantes -- MODIFICADO
#define LIMITE_32826 33026
#define FACTOR_32826 3

int aplicar_limite32826(int valor) {
    if (valor > LIMITE_32826) return LIMITE_32826;
    return valor * FACTOR_32826;
}
