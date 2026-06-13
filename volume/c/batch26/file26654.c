// fichero 26654 -- macros y constantes
#define LIMITE_26654 26754
#define FACTOR_26654 5

int aplicar_limite26654(int valor) {
    if (valor > LIMITE_26654) return LIMITE_26654;
    return valor * FACTOR_26654;
}
