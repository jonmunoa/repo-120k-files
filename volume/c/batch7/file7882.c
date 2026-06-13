// fichero 7882 -- macros y constantes
#define LIMITE_7882 7982
#define FACTOR_7882 3

int aplicar_limite7882(int valor) {
    if (valor > LIMITE_7882) return LIMITE_7882;
    return valor * FACTOR_7882;
}
