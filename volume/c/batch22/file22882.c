// fichero 22882 -- macros y constantes
#define LIMITE_22882 22982
#define FACTOR_22882 3

int aplicar_limite22882(int valor) {
    if (valor > LIMITE_22882) return LIMITE_22882;
    return valor * FACTOR_22882;
}
