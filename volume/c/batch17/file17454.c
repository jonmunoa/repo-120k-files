// fichero 17454 -- macros y constantes
#define LIMITE_17454 17554
#define FACTOR_17454 5

int aplicar_limite17454(int valor) {
    if (valor > LIMITE_17454) return LIMITE_17454;
    return valor * FACTOR_17454;
}
