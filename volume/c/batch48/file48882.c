// fichero 48882 -- macros y constantes
#define LIMITE_48882 48982
#define FACTOR_48882 3

int aplicar_limite48882(int valor) {
    if (valor > LIMITE_48882) return LIMITE_48882;
    return valor * FACTOR_48882;
}
