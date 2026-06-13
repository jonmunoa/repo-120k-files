// fichero 17382 -- macros y constantes
#define LIMITE_17382 17482
#define FACTOR_17382 3

int aplicar_limite17382(int valor) {
    if (valor > LIMITE_17382) return LIMITE_17382;
    return valor * FACTOR_17382;
}
