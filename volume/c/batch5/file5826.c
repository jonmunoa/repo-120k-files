// fichero 5826 -- macros y constantes -- MODIFICADO
#define LIMITE_5826 6026
#define FACTOR_5826 3

int aplicar_limite5826(int valor) {
    if (valor > LIMITE_5826) return LIMITE_5826;
    return valor * FACTOR_5826;
}
