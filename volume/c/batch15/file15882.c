// fichero 15882 -- macros y constantes
#define LIMITE_15882 15982
#define FACTOR_15882 3

int aplicar_limite15882(int valor) {
    if (valor > LIMITE_15882) return LIMITE_15882;
    return valor * FACTOR_15882;
}
