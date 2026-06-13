// fichero 32882 -- macros y constantes
#define LIMITE_32882 32982
#define FACTOR_32882 3

int aplicar_limite32882(int valor) {
    if (valor > LIMITE_32882) return LIMITE_32882;
    return valor * FACTOR_32882;
}
