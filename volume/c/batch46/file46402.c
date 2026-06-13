// fichero 46402 -- macros y constantes
#define LIMITE_46402 46502
#define FACTOR_46402 3

int aplicar_limite46402(int valor) {
    if (valor > LIMITE_46402) return LIMITE_46402;
    return valor * FACTOR_46402;
}
