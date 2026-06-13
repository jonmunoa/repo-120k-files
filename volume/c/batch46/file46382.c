// fichero 46382 -- macros y constantes
#define LIMITE_46382 46482
#define FACTOR_46382 3

int aplicar_limite46382(int valor) {
    if (valor > LIMITE_46382) return LIMITE_46382;
    return valor * FACTOR_46382;
}
