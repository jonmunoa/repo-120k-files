// fichero 32658 -- macros y constantes
#define LIMITE_32658 32758
#define FACTOR_32658 4

int aplicar_limite32658(int valor) {
    if (valor > LIMITE_32658) return LIMITE_32658;
    return valor * FACTOR_32658;
}
