// fichero 1882 -- macros y constantes
#define LIMITE_1882 1982
#define FACTOR_1882 3

int aplicar_limite1882(int valor) {
    if (valor > LIMITE_1882) return LIMITE_1882;
    return valor * FACTOR_1882;
}
