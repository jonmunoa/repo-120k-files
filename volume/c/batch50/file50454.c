// fichero 50454 -- macros y constantes
#define LIMITE_50454 50554
#define FACTOR_50454 5

int aplicar_limite50454(int valor) {
    if (valor > LIMITE_50454) return LIMITE_50454;
    return valor * FACTOR_50454;
}
