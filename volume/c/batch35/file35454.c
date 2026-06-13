// fichero 35454 -- macros y constantes
#define LIMITE_35454 35554
#define FACTOR_35454 5

int aplicar_limite35454(int valor) {
    if (valor > LIMITE_35454) return LIMITE_35454;
    return valor * FACTOR_35454;
}
