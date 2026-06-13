// fichero 13382 -- macros y constantes
#define LIMITE_13382 13482
#define FACTOR_13382 3

int aplicar_limite13382(int valor) {
    if (valor > LIMITE_13382) return LIMITE_13382;
    return valor * FACTOR_13382;
}
