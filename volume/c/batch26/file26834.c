// fichero 26834 -- macros y constantes
#define LIMITE_26834 26934
#define FACTOR_26834 5

int aplicar_limite26834(int valor) {
    if (valor > LIMITE_26834) return LIMITE_26834;
    return valor * FACTOR_26834;
}
