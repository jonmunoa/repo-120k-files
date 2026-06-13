// fichero 42402 -- macros y constantes
#define LIMITE_42402 42502
#define FACTOR_42402 3

int aplicar_limite42402(int valor) {
    if (valor > LIMITE_42402) return LIMITE_42402;
    return valor * FACTOR_42402;
}
