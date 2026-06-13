// fichero 5830 -- macros y constantes
#define LIMITE_5830 5930
#define FACTOR_5830 1

int aplicar_limite5830(int valor) {
    if (valor > LIMITE_5830) return LIMITE_5830;
    return valor * FACTOR_5830;
}
