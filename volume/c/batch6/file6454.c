// fichero 6454 -- macros y constantes
#define LIMITE_6454 6554
#define FACTOR_6454 5

int aplicar_limite6454(int valor) {
    if (valor > LIMITE_6454) return LIMITE_6454;
    return valor * FACTOR_6454;
}
