// fichero 39762 -- macros y constantes
#define LIMITE_39762 39862
#define FACTOR_39762 3

int aplicar_limite39762(int valor) {
    if (valor > LIMITE_39762) return LIMITE_39762;
    return valor * FACTOR_39762;
}
