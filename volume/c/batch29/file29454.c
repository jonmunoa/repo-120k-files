// fichero 29454 -- macros y constantes
#define LIMITE_29454 29554
#define FACTOR_29454 5

int aplicar_limite29454(int valor) {
    if (valor > LIMITE_29454) return LIMITE_29454;
    return valor * FACTOR_29454;
}
