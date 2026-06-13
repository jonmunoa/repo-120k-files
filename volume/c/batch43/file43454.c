// fichero 43454 -- macros y constantes
#define LIMITE_43454 43554
#define FACTOR_43454 5

int aplicar_limite43454(int valor) {
    if (valor > LIMITE_43454) return LIMITE_43454;
    return valor * FACTOR_43454;
}
