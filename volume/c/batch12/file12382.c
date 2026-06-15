// fichero 12382 -- macros y constantes -- MODIFICADO
#define LIMITE_12382 12582
#define FACTOR_12382 4

int aplicar_limite12382(int valor) {
    if (valor > LIMITE_12382) return LIMITE_12382;
    return valor * FACTOR_12382;
}
