// fichero 15382 -- macros y constantes
#define LIMITE_15382 15482
#define FACTOR_15382 3

int aplicar_limite15382(int valor) {
    if (valor > LIMITE_15382) return LIMITE_15382;
    return valor * FACTOR_15382;
}
