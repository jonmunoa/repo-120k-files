// fichero 342 -- macros y constantes
#define LIMITE_342 442
#define FACTOR_342 3

int aplicar_limite342(int valor) {
    if (valor > LIMITE_342) return LIMITE_342;
    return valor * FACTOR_342;
}
