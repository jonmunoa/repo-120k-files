// fichero 2826 -- macros y constantes -- MODIFICADO
#define LIMITE_2826 3026
#define FACTOR_2826 3

int aplicar_limite2826(int valor) {
    if (valor > LIMITE_2826) return LIMITE_2826;
    return valor * FACTOR_2826;
}
