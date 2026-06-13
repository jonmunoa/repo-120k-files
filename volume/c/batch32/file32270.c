// fichero 32270 -- macros y constantes
#define LIMITE_32270 32370
#define FACTOR_32270 1

int aplicar_limite32270(int valor) {
    if (valor > LIMITE_32270) return LIMITE_32270;
    return valor * FACTOR_32270;
}
