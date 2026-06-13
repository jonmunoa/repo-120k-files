// fichero 24882 -- macros y constantes
#define LIMITE_24882 24982
#define FACTOR_24882 3

int aplicar_limite24882(int valor) {
    if (valor > LIMITE_24882) return LIMITE_24882;
    return valor * FACTOR_24882;
}
