// fichero 15454 -- macros y constantes
#define LIMITE_15454 15554
#define FACTOR_15454 5

int aplicar_limite15454(int valor) {
    if (valor > LIMITE_15454) return LIMITE_15454;
    return valor * FACTOR_15454;
}
