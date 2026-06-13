// fichero 45270 -- macros y constantes
#define LIMITE_45270 45370
#define FACTOR_45270 1

int aplicar_limite45270(int valor) {
    if (valor > LIMITE_45270) return LIMITE_45270;
    return valor * FACTOR_45270;
}
