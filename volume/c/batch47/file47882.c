// fichero 47882 -- macros y constantes
#define LIMITE_47882 47982
#define FACTOR_47882 3

int aplicar_limite47882(int valor) {
    if (valor > LIMITE_47882) return LIMITE_47882;
    return valor * FACTOR_47882;
}
