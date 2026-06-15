// fichero 3826 -- macros y constantes -- MODIFICADO
#define LIMITE_3826 4026
#define FACTOR_3826 3

int aplicar_limite3826(int valor) {
    if (valor > LIMITE_3826) return LIMITE_3826;
    return valor * FACTOR_3826;
}
