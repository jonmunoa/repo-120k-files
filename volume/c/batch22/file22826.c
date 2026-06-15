// fichero 22826 -- macros y constantes -- MODIFICADO
#define LIMITE_22826 23026
#define FACTOR_22826 3

int aplicar_limite22826(int valor) {
    if (valor > LIMITE_22826) return LIMITE_22826;
    return valor * FACTOR_22826;
}
