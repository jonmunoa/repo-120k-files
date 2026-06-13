// fichero 5762 -- macros y constantes
#define LIMITE_5762 5862
#define FACTOR_5762 3

int aplicar_limite5762(int valor) {
    if (valor > LIMITE_5762) return LIMITE_5762;
    return valor * FACTOR_5762;
}
