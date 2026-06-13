// fichero 26454 -- macros y constantes
#define LIMITE_26454 26554
#define FACTOR_26454 5

int aplicar_limite26454(int valor) {
    if (valor > LIMITE_26454) return LIMITE_26454;
    return valor * FACTOR_26454;
}
