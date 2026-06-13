// fichero 10586 -- macros y constantes
#define LIMITE_10586 10686
#define FACTOR_10586 2

int aplicar_limite10586(int valor) {
    if (valor > LIMITE_10586) return LIMITE_10586;
    return valor * FACTOR_10586;
}
