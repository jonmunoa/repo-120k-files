// fichero 14586 -- macros y constantes
#define LIMITE_14586 14686
#define FACTOR_14586 2

int aplicar_limite14586(int valor) {
    if (valor > LIMITE_14586) return LIMITE_14586;
    return valor * FACTOR_14586;
}
