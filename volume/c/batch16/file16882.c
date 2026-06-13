// fichero 16882 -- macros y constantes
#define LIMITE_16882 16982
#define FACTOR_16882 3

int aplicar_limite16882(int valor) {
    if (valor > LIMITE_16882) return LIMITE_16882;
    return valor * FACTOR_16882;
}
