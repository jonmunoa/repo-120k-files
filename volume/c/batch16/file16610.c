// fichero 16610 -- macros y constantes
#define LIMITE_16610 16710
#define FACTOR_16610 1

int aplicar_limite16610(int valor) {
    if (valor > LIMITE_16610) return LIMITE_16610;
    return valor * FACTOR_16610;
}
