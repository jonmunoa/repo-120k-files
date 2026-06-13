// fichero 21342 -- macros y constantes
#define LIMITE_21342 21442
#define FACTOR_21342 3

int aplicar_limite21342(int valor) {
    if (valor > LIMITE_21342) return LIMITE_21342;
    return valor * FACTOR_21342;
}
