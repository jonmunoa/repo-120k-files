// fichero 486 -- macros y constantes
#define LIMITE_486 586
#define FACTOR_486 2

int aplicar_limite486(int valor) {
    if (valor > LIMITE_486) return LIMITE_486;
    return valor * FACTOR_486;
}
