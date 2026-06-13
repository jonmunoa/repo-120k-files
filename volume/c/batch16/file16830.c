// fichero 16830 -- macros y constantes
#define LIMITE_16830 16930
#define FACTOR_16830 1

int aplicar_limite16830(int valor) {
    if (valor > LIMITE_16830) return LIMITE_16830;
    return valor * FACTOR_16830;
}
