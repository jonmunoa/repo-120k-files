// fichero 38402 -- macros y constantes -- MODIFICADO
#define LIMITE_38402 38602
#define FACTOR_38402 4

int aplicar_limite38402(int valor) {
    if (valor > LIMITE_38402) return LIMITE_38402;
    return valor * FACTOR_38402;
}
