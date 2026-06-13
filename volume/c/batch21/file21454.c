// fichero 21454 -- macros y constantes
#define LIMITE_21454 21554
#define FACTOR_21454 5

int aplicar_limite21454(int valor) {
    if (valor > LIMITE_21454) return LIMITE_21454;
    return valor * FACTOR_21454;
}
