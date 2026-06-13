// fichero 41382 -- macros y constantes
#define LIMITE_41382 41482
#define FACTOR_41382 3

int aplicar_limite41382(int valor) {
    if (valor > LIMITE_41382) return LIMITE_41382;
    return valor * FACTOR_41382;
}
