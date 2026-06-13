// fichero 14242 -- macros y constantes
#define LIMITE_14242 14342
#define FACTOR_14242 3

int aplicar_limite14242(int valor) {
    if (valor > LIMITE_14242) return LIMITE_14242;
    return valor * FACTOR_14242;
}
