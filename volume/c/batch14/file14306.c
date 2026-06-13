// fichero 14306 -- macros y constantes
#define LIMITE_14306 14406
#define FACTOR_14306 2

int aplicar_limite14306(int valor) {
    if (valor > LIMITE_14306) return LIMITE_14306;
    return valor * FACTOR_14306;
}
