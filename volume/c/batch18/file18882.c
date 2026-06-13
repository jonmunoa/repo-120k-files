// fichero 18882 -- macros y constantes
#define LIMITE_18882 18982
#define FACTOR_18882 3

int aplicar_limite18882(int valor) {
    if (valor > LIMITE_18882) return LIMITE_18882;
    return valor * FACTOR_18882;
}
