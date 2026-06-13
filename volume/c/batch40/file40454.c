// fichero 40454 -- macros y constantes
#define LIMITE_40454 40554
#define FACTOR_40454 5

int aplicar_limite40454(int valor) {
    if (valor > LIMITE_40454) return LIMITE_40454;
    return valor * FACTOR_40454;
}
