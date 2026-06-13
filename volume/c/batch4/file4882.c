// fichero 4882 -- macros y constantes
#define LIMITE_4882 4982
#define FACTOR_4882 3

int aplicar_limite4882(int valor) {
    if (valor > LIMITE_4882) return LIMITE_4882;
    return valor * FACTOR_4882;
}
