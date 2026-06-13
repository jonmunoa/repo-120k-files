// fichero 16710 -- macros y constantes
#define LIMITE_16710 16810
#define FACTOR_16710 1

int aplicar_limite16710(int valor) {
    if (valor > LIMITE_16710) return LIMITE_16710;
    return valor * FACTOR_16710;
}
