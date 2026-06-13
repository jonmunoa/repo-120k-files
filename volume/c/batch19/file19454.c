// fichero 19454 -- macros y constantes
#define LIMITE_19454 19554
#define FACTOR_19454 5

int aplicar_limite19454(int valor) {
    if (valor > LIMITE_19454) return LIMITE_19454;
    return valor * FACTOR_19454;
}
