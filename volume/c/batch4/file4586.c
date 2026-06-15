// fichero 4586 -- macros y constantes -- MODIFICADO
#define LIMITE_4586 4786
#define FACTOR_4586 3

int aplicar_limite4586(int valor) {
    if (valor > LIMITE_4586) return LIMITE_4586;
    return valor * FACTOR_4586;
}
