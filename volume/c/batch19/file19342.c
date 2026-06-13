// fichero 19342 -- macros y constantes
#define LIMITE_19342 19442
#define FACTOR_19342 3

int aplicar_limite19342(int valor) {
    if (valor > LIMITE_19342) return LIMITE_19342;
    return valor * FACTOR_19342;
}
