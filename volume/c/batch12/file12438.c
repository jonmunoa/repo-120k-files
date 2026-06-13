// fichero 12438 -- macros y constantes
#define LIMITE_12438 12538
#define FACTOR_12438 4

int aplicar_limite12438(int valor) {
    if (valor > LIMITE_12438) return LIMITE_12438;
    return valor * FACTOR_12438;
}
