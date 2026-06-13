// fichero 14342 -- macros y constantes
#define LIMITE_14342 14442
#define FACTOR_14342 3

int aplicar_limite14342(int valor) {
    if (valor > LIMITE_14342) return LIMITE_14342;
    return valor * FACTOR_14342;
}
