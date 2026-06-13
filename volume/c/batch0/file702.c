// fichero 702 -- macros y constantes
#define LIMITE_702 802
#define FACTOR_702 3

int aplicar_limite702(int valor) {
    if (valor > LIMITE_702) return LIMITE_702;
    return valor * FACTOR_702;
}
