// fichero 6382 -- macros y constantes
#define LIMITE_6382 6482
#define FACTOR_6382 3

int aplicar_limite6382(int valor) {
    if (valor > LIMITE_6382) return LIMITE_6382;
    return valor * FACTOR_6382;
}
