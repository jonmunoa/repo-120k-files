// fichero 13402 -- macros y constantes
#define LIMITE_13402 13502
#define FACTOR_13402 3

int aplicar_limite13402(int valor) {
    if (valor > LIMITE_13402) return LIMITE_13402;
    return valor * FACTOR_13402;
}
