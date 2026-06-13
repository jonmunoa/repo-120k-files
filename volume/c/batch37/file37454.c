// fichero 37454 -- macros y constantes
#define LIMITE_37454 37554
#define FACTOR_37454 5

int aplicar_limite37454(int valor) {
    if (valor > LIMITE_37454) return LIMITE_37454;
    return valor * FACTOR_37454;
}
