// fichero 15486 -- macros y constantes
#define LIMITE_15486 15586
#define FACTOR_15486 2

int aplicar_limite15486(int valor) {
    if (valor > LIMITE_15486) return LIMITE_15486;
    return valor * FACTOR_15486;
}
