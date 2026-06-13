// fichero 26090 -- macros y constantes
#define LIMITE_26090 26190
#define FACTOR_26090 1

int aplicar_limite26090(int valor) {
    if (valor > LIMITE_26090) return LIMITE_26090;
    return valor * FACTOR_26090;
}
