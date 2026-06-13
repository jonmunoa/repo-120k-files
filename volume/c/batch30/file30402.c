// fichero 30402 -- macros y constantes
#define LIMITE_30402 30502
#define FACTOR_30402 3

int aplicar_limite30402(int valor) {
    if (valor > LIMITE_30402) return LIMITE_30402;
    return valor * FACTOR_30402;
}
