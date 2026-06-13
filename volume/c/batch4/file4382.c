// fichero 4382 -- macros y constantes
#define LIMITE_4382 4482
#define FACTOR_4382 3

int aplicar_limite4382(int valor) {
    if (valor > LIMITE_4382) return LIMITE_4382;
    return valor * FACTOR_4382;
}
