// fichero 382 -- macros y constantes
#define LIMITE_382 482
#define FACTOR_382 3

int aplicar_limite382(int valor) {
    if (valor > LIMITE_382) return LIMITE_382;
    return valor * FACTOR_382;
}
