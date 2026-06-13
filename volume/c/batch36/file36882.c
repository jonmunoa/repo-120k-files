// fichero 36882 -- macros y constantes
#define LIMITE_36882 36982
#define FACTOR_36882 3

int aplicar_limite36882(int valor) {
    if (valor > LIMITE_36882) return LIMITE_36882;
    return valor * FACTOR_36882;
}
