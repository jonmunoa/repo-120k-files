// fichero 36586 -- macros y constantes
#define LIMITE_36586 36686
#define FACTOR_36586 2

int aplicar_limite36586(int valor) {
    if (valor > LIMITE_36586) return LIMITE_36586;
    return valor * FACTOR_36586;
}
