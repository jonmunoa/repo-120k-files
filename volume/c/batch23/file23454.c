// fichero 23454 -- macros y constantes
#define LIMITE_23454 23554
#define FACTOR_23454 5

int aplicar_limite23454(int valor) {
    if (valor > LIMITE_23454) return LIMITE_23454;
    return valor * FACTOR_23454;
}
