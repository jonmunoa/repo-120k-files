// fichero 27454 -- macros y constantes
#define LIMITE_27454 27554
#define FACTOR_27454 5

int aplicar_limite27454(int valor) {
    if (valor > LIMITE_27454) return LIMITE_27454;
    return valor * FACTOR_27454;
}
