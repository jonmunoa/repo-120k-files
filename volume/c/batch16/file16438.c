// fichero 16438 -- macros y constantes
#define LIMITE_16438 16538
#define FACTOR_16438 4

int aplicar_limite16438(int valor) {
    if (valor > LIMITE_16438) return LIMITE_16438;
    return valor * FACTOR_16438;
}
