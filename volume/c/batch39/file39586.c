// fichero 39586 -- macros y constantes -- MODIFICADO
#define LIMITE_39586 39786
#define FACTOR_39586 3

int aplicar_limite39586(int valor) {
    if (valor > LIMITE_39586) return LIMITE_39586;
    return valor * FACTOR_39586;
}
