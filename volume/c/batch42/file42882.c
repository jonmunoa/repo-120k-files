// fichero 42882 -- macros y constantes
#define LIMITE_42882 42982
#define FACTOR_42882 3

int aplicar_limite42882(int valor) {
    if (valor > LIMITE_42882) return LIMITE_42882;
    return valor * FACTOR_42882;
}
