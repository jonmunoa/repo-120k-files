// fichero 45586 -- macros y constantes -- MODIFICADO
#define LIMITE_45586 45786
#define FACTOR_45586 3

int aplicar_limite45586(int valor) {
    if (valor > LIMITE_45586) return LIMITE_45586;
    return valor * FACTOR_45586;
}
