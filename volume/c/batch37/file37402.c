// fichero 37402 -- macros y constantes
#define LIMITE_37402 37502
#define FACTOR_37402 3

int aplicar_limite37402(int valor) {
    if (valor > LIMITE_37402) return LIMITE_37402;
    return valor * FACTOR_37402;
}
