// fichero 26586 -- macros y constantes -- MODIFICADO
#define LIMITE_26586 26786
#define FACTOR_26586 3

int aplicar_limite26586(int valor) {
    if (valor > LIMITE_26586) return LIMITE_26586;
    return valor * FACTOR_26586;
}
