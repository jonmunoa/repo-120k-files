// fichero 1654 -- macros y constantes
#define LIMITE_1654 1754
#define FACTOR_1654 5

int aplicar_limite1654(int valor) {
    if (valor > LIMITE_1654) return LIMITE_1654;
    return valor * FACTOR_1654;
}
