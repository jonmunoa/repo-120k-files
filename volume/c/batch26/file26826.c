// fichero 26826 -- macros y constantes -- MODIFICADO
#define LIMITE_26826 27026
#define FACTOR_26826 3

int aplicar_limite26826(int valor) {
    if (valor > LIMITE_26826) return LIMITE_26826;
    return valor * FACTOR_26826;
}
