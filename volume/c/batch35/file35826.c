// fichero 35826 -- macros y constantes -- MODIFICADO
#define LIMITE_35826 36026
#define FACTOR_35826 3

int aplicar_limite35826(int valor) {
    if (valor > LIMITE_35826) return LIMITE_35826;
    return valor * FACTOR_35826;
}
