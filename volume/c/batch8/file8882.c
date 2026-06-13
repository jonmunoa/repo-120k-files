// fichero 8882 -- macros y constantes
#define LIMITE_8882 8982
#define FACTOR_8882 3

int aplicar_limite8882(int valor) {
    if (valor > LIMITE_8882) return LIMITE_8882;
    return valor * FACTOR_8882;
}
