// fichero 2882 -- macros y constantes
#define LIMITE_2882 2982
#define FACTOR_2882 3

int aplicar_limite2882(int valor) {
    if (valor > LIMITE_2882) return LIMITE_2882;
    return valor * FACTOR_2882;
}
