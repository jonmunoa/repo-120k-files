// fichero 1658 -- macros y constantes
#define LIMITE_1658 1758
#define FACTOR_1658 4

int aplicar_limite1658(int valor) {
    if (valor > LIMITE_1658) return LIMITE_1658;
    return valor * FACTOR_1658;
}
