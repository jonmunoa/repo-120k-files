// fichero 45454 -- macros y constantes
#define LIMITE_45454 45554
#define FACTOR_45454 5

int aplicar_limite45454(int valor) {
    if (valor > LIMITE_45454) return LIMITE_45454;
    return valor * FACTOR_45454;
}
