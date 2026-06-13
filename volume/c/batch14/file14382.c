// fichero 14382 -- macros y constantes
#define LIMITE_14382 14482
#define FACTOR_14382 3

int aplicar_limite14382(int valor) {
    if (valor > LIMITE_14382) return LIMITE_14382;
    return valor * FACTOR_14382;
}
