// fichero 36454 -- macros y constantes
#define LIMITE_36454 36554
#define FACTOR_36454 5

int aplicar_limite36454(int valor) {
    if (valor > LIMITE_36454) return LIMITE_36454;
    return valor * FACTOR_36454;
}
