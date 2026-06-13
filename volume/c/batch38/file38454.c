// fichero 38454 -- macros y constantes
#define LIMITE_38454 38554
#define FACTOR_38454 5

int aplicar_limite38454(int valor) {
    if (valor > LIMITE_38454) return LIMITE_38454;
    return valor * FACTOR_38454;
}
