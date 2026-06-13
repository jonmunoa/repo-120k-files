// fichero 31454 -- macros y constantes
#define LIMITE_31454 31554
#define FACTOR_31454 5

int aplicar_limite31454(int valor) {
    if (valor > LIMITE_31454) return LIMITE_31454;
    return valor * FACTOR_31454;
}
