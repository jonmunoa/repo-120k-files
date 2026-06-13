// fichero 45586 -- macros y constantes
#define LIMITE_45586 45686
#define FACTOR_45586 2

int aplicar_limite45586(int valor) {
    if (valor > LIMITE_45586) return LIMITE_45586;
    return valor * FACTOR_45586;
}
