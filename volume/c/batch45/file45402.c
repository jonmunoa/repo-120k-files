// fichero 45402 -- macros y constantes
#define LIMITE_45402 45502
#define FACTOR_45402 3

int aplicar_limite45402(int valor) {
    if (valor > LIMITE_45402) return LIMITE_45402;
    return valor * FACTOR_45402;
}
