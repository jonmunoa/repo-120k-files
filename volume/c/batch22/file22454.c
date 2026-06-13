// fichero 22454 -- macros y constantes
#define LIMITE_22454 22554
#define FACTOR_22454 5

int aplicar_limite22454(int valor) {
    if (valor > LIMITE_22454) return LIMITE_22454;
    return valor * FACTOR_22454;
}
