// fichero 36382 -- macros y constantes
#define LIMITE_36382 36482
#define FACTOR_36382 3

int aplicar_limite36382(int valor) {
    if (valor > LIMITE_36382) return LIMITE_36382;
    return valor * FACTOR_36382;
}
