// fichero 4826 -- macros y constantes -- MODIFICADO
#define LIMITE_4826 5026
#define FACTOR_4826 3

int aplicar_limite4826(int valor) {
    if (valor > LIMITE_4826) return LIMITE_4826;
    return valor * FACTOR_4826;
}
