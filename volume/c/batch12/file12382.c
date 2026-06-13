// fichero 12382 -- macros y constantes
#define LIMITE_12382 12482
#define FACTOR_12382 3

int aplicar_limite12382(int valor) {
    if (valor > LIMITE_12382) return LIMITE_12382;
    return valor * FACTOR_12382;
}
