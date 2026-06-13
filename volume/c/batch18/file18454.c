// fichero 18454 -- macros y constantes
#define LIMITE_18454 18554
#define FACTOR_18454 5

int aplicar_limite18454(int valor) {
    if (valor > LIMITE_18454) return LIMITE_18454;
    return valor * FACTOR_18454;
}
