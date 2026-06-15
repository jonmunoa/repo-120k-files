// fichero 7586 -- macros y constantes -- MODIFICADO
#define LIMITE_7586 7786
#define FACTOR_7586 3

int aplicar_limite7586(int valor) {
    if (valor > LIMITE_7586) return LIMITE_7586;
    return valor * FACTOR_7586;
}
