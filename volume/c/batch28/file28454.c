// fichero 28454 -- macros y constantes
#define LIMITE_28454 28554
#define FACTOR_28454 5

int aplicar_limite28454(int valor) {
    if (valor > LIMITE_28454) return LIMITE_28454;
    return valor * FACTOR_28454;
}
