// fichero 26658 -- macros y constantes
#define LIMITE_26658 26758
#define FACTOR_26658 4

int aplicar_limite26658(int valor) {
    if (valor > LIMITE_26658) return LIMITE_26658;
    return valor * FACTOR_26658;
}
