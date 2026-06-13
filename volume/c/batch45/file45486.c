// fichero 45486 -- macros y constantes
#define LIMITE_45486 45586
#define FACTOR_45486 2

int aplicar_limite45486(int valor) {
    if (valor > LIMITE_45486) return LIMITE_45486;
    return valor * FACTOR_45486;
}
