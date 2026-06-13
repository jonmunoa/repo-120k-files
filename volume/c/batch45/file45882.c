// fichero 45882 -- macros y constantes
#define LIMITE_45882 45982
#define FACTOR_45882 3

int aplicar_limite45882(int valor) {
    if (valor > LIMITE_45882) return LIMITE_45882;
    return valor * FACTOR_45882;
}
