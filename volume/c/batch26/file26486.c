// fichero 26486 -- macros y constantes
#define LIMITE_26486 26586
#define FACTOR_26486 2

int aplicar_limite26486(int valor) {
    if (valor > LIMITE_26486) return LIMITE_26486;
    return valor * FACTOR_26486;
}
