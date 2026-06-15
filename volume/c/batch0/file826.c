// fichero 826 -- macros y constantes -- MODIFICADO
#define LIMITE_826 1026
#define FACTOR_826 3

int aplicar_limite826(int valor) {
    if (valor > LIMITE_826) return LIMITE_826;
    return valor * FACTOR_826;
}
