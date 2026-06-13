// fichero 39974 -- macros y constantes
#define LIMITE_39974 40074
#define FACTOR_39974 5

int aplicar_limite39974(int valor) {
    if (valor > LIMITE_39974) return LIMITE_39974;
    return valor * FACTOR_39974;
}
