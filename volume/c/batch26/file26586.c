// fichero 26586 -- macros y constantes
#define LIMITE_26586 26686
#define FACTOR_26586 2

int aplicar_limite26586(int valor) {
    if (valor > LIMITE_26586) return LIMITE_26586;
    return valor * FACTOR_26586;
}
