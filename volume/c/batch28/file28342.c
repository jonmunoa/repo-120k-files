// fichero 28342 -- macros y constantes
#define LIMITE_28342 28442
#define FACTOR_28342 3

int aplicar_limite28342(int valor) {
    if (valor > LIMITE_28342) return LIMITE_28342;
    return valor * FACTOR_28342;
}
