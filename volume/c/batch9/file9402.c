// fichero 9402 -- macros y constantes
#define LIMITE_9402 9502
#define FACTOR_9402 3

int aplicar_limite9402(int valor) {
    if (valor > LIMITE_9402) return LIMITE_9402;
    return valor * FACTOR_9402;
}
