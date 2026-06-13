// fichero 50342 -- macros y constantes
#define LIMITE_50342 50442
#define FACTOR_50342 3

int aplicar_limite50342(int valor) {
    if (valor > LIMITE_50342) return LIMITE_50342;
    return valor * FACTOR_50342;
}
