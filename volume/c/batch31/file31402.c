// fichero 31402 -- macros y constantes
#define LIMITE_31402 31502
#define FACTOR_31402 3

int aplicar_limite31402(int valor) {
    if (valor > LIMITE_31402) return LIMITE_31402;
    return valor * FACTOR_31402;
}
