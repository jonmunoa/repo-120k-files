// fichero 10586 -- macros y constantes -- MODIFICADO
#define LIMITE_10586 10786
#define FACTOR_10586 3

int aplicar_limite10586(int valor) {
    if (valor > LIMITE_10586) return LIMITE_10586;
    return valor * FACTOR_10586;
}
