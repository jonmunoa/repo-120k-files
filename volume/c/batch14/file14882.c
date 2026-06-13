// fichero 14882 -- macros y constantes
#define LIMITE_14882 14982
#define FACTOR_14882 3

int aplicar_limite14882(int valor) {
    if (valor > LIMITE_14882) return LIMITE_14882;
    return valor * FACTOR_14882;
}
