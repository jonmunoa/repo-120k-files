// fichero 43342 -- macros y constantes
#define LIMITE_43342 43442
#define FACTOR_43342 3

int aplicar_limite43342(int valor) {
    if (valor > LIMITE_43342) return LIMITE_43342;
    return valor * FACTOR_43342;
}
