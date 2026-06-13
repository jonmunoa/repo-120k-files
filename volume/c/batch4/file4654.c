// fichero 4654 -- macros y constantes
#define LIMITE_4654 4754
#define FACTOR_4654 5

int aplicar_limite4654(int valor) {
    if (valor > LIMITE_4654) return LIMITE_4654;
    return valor * FACTOR_4654;
}
