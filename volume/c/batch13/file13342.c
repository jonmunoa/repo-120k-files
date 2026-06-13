// fichero 13342 -- macros y constantes
#define LIMITE_13342 13442
#define FACTOR_13342 3

int aplicar_limite13342(int valor) {
    if (valor > LIMITE_13342) return LIMITE_13342;
    return valor * FACTOR_13342;
}
