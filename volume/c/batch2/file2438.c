// fichero 2438 -- macros y constantes
#define LIMITE_2438 2538
#define FACTOR_2438 4

int aplicar_limite2438(int valor) {
    if (valor > LIMITE_2438) return LIMITE_2438;
    return valor * FACTOR_2438;
}
