// fichero 39454 -- macros y constantes
#define LIMITE_39454 39554
#define FACTOR_39454 5

int aplicar_limite39454(int valor) {
    if (valor > LIMITE_39454) return LIMITE_39454;
    return valor * FACTOR_39454;
}
