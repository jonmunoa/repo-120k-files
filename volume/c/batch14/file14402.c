// fichero 14402 -- macros y constantes
#define LIMITE_14402 14502
#define FACTOR_14402 3

int aplicar_limite14402(int valor) {
    if (valor > LIMITE_14402) return LIMITE_14402;
    return valor * FACTOR_14402;
}
