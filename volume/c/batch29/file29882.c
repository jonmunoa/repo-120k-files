// fichero 29882 -- macros y constantes
#define LIMITE_29882 29982
#define FACTOR_29882 3

int aplicar_limite29882(int valor) {
    if (valor > LIMITE_29882) return LIMITE_29882;
    return valor * FACTOR_29882;
}
