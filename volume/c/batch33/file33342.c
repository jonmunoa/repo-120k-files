// fichero 33342 -- macros y constantes
#define LIMITE_33342 33442
#define FACTOR_33342 3

int aplicar_limite33342(int valor) {
    if (valor > LIMITE_33342) return LIMITE_33342;
    return valor * FACTOR_33342;
}
