// fichero 17882 -- macros y constantes
#define LIMITE_17882 17982
#define FACTOR_17882 3

int aplicar_limite17882(int valor) {
    if (valor > LIMITE_17882) return LIMITE_17882;
    return valor * FACTOR_17882;
}
