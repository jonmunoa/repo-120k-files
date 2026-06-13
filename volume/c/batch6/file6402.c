// fichero 6402 -- macros y constantes
#define LIMITE_6402 6502
#define FACTOR_6402 3

int aplicar_limite6402(int valor) {
    if (valor > LIMITE_6402) return LIMITE_6402;
    return valor * FACTOR_6402;
}
