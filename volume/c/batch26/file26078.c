// fichero 26078 -- macros y constantes
#define LIMITE_26078 26178
#define FACTOR_26078 4

int aplicar_limite26078(int valor) {
    if (valor > LIMITE_26078) return LIMITE_26078;
    return valor * FACTOR_26078;
}
