// fichero 5882 -- macros y constantes
#define LIMITE_5882 5982
#define FACTOR_5882 3

int aplicar_limite5882(int valor) {
    if (valor > LIMITE_5882) return LIMITE_5882;
    return valor * FACTOR_5882;
}
