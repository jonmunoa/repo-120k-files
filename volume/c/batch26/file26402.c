// fichero 26402 -- macros y constantes
#define LIMITE_26402 26502
#define FACTOR_26402 3

int aplicar_limite26402(int valor) {
    if (valor > LIMITE_26402) return LIMITE_26402;
    return valor * FACTOR_26402;
}
