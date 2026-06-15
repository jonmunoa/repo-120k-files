// fichero 15586 -- macros y constantes -- MODIFICADO
#define LIMITE_15586 15786
#define FACTOR_15586 3

int aplicar_limite15586(int valor) {
    if (valor > LIMITE_15586) return LIMITE_15586;
    return valor * FACTOR_15586;
}
