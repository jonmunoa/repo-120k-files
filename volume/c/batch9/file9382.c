// fichero 9382 -- macros y constantes
#define LIMITE_9382 9482
#define FACTOR_9382 3

int aplicar_limite9382(int valor) {
    if (valor > LIMITE_9382) return LIMITE_9382;
    return valor * FACTOR_9382;
}
