// fichero 2342 -- macros y constantes
#define LIMITE_2342 2442
#define FACTOR_2342 3

int aplicar_limite2342(int valor) {
    if (valor > LIMITE_2342) return LIMITE_2342;
    return valor * FACTOR_2342;
}
