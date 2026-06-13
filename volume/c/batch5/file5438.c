// fichero 5438 -- macros y constantes
#define LIMITE_5438 5538
#define FACTOR_5438 4

int aplicar_limite5438(int valor) {
    if (valor > LIMITE_5438) return LIMITE_5438;
    return valor * FACTOR_5438;
}
