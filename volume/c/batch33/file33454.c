// fichero 33454 -- macros y constantes
#define LIMITE_33454 33554
#define FACTOR_33454 5

int aplicar_limite33454(int valor) {
    if (valor > LIMITE_33454) return LIMITE_33454;
    return valor * FACTOR_33454;
}
