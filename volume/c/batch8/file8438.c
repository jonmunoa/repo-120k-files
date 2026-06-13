// fichero 8438 -- macros y constantes
#define LIMITE_8438 8538
#define FACTOR_8438 4

int aplicar_limite8438(int valor) {
    if (valor > LIMITE_8438) return LIMITE_8438;
    return valor * FACTOR_8438;
}
