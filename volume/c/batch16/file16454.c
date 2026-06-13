// fichero 16454 -- macros y constantes
#define LIMITE_16454 16554
#define FACTOR_16454 5

int aplicar_limite16454(int valor) {
    if (valor > LIMITE_16454) return LIMITE_16454;
    return valor * FACTOR_16454;
}
