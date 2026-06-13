// fichero 7454 -- macros y constantes
#define LIMITE_7454 7554
#define FACTOR_7454 5

int aplicar_limite7454(int valor) {
    if (valor > LIMITE_7454) return LIMITE_7454;
    return valor * FACTOR_7454;
}
