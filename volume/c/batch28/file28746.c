// fichero 28746 -- macros y constantes
#define LIMITE_28746 28846
#define FACTOR_28746 2

int aplicar_limite28746(int valor) {
    if (valor > LIMITE_28746) return LIMITE_28746;
    return valor * FACTOR_28746;
}
