// fichero 46454 -- macros y constantes
#define LIMITE_46454 46554
#define FACTOR_46454 5

int aplicar_limite46454(int valor) {
    if (valor > LIMITE_46454) return LIMITE_46454;
    return valor * FACTOR_46454;
}
