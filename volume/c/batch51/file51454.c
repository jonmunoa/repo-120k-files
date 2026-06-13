// fichero 51454 -- macros y constantes
#define LIMITE_51454 51554
#define FACTOR_51454 5

int aplicar_limite51454(int valor) {
    if (valor > LIMITE_51454) return LIMITE_51454;
    return valor * FACTOR_51454;
}
