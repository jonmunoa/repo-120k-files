// fichero 27342 -- macros y constantes
#define LIMITE_27342 27442
#define FACTOR_27342 3

int aplicar_limite27342(int valor) {
    if (valor > LIMITE_27342) return LIMITE_27342;
    return valor * FACTOR_27342;
}
