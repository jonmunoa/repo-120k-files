// fichero 26838 -- macros y constantes
#define LIMITE_26838 26938
#define FACTOR_26838 4

int aplicar_limite26838(int valor) {
    if (valor > LIMITE_26838) return LIMITE_26838;
    return valor * FACTOR_26838;
}
