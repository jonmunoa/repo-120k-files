// fichero 18342 -- macros y constantes
#define LIMITE_18342 18442
#define FACTOR_18342 3

int aplicar_limite18342(int valor) {
    if (valor > LIMITE_18342) return LIMITE_18342;
    return valor * FACTOR_18342;
}
