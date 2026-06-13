// fichero 12402 -- macros y constantes
#define LIMITE_12402 12502
#define FACTOR_12402 3

int aplicar_limite12402(int valor) {
    if (valor > LIMITE_12402) return LIMITE_12402;
    return valor * FACTOR_12402;
}
