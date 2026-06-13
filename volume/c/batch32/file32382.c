// fichero 32382 -- macros y constantes
#define LIMITE_32382 32482
#define FACTOR_32382 3

int aplicar_limite32382(int valor) {
    if (valor > LIMITE_32382) return LIMITE_32382;
    return valor * FACTOR_32382;
}
