// fichero 12658 -- macros y constantes
#define LIMITE_12658 12758
#define FACTOR_12658 4

int aplicar_limite12658(int valor) {
    if (valor > LIMITE_12658) return LIMITE_12658;
    return valor * FACTOR_12658;
}
