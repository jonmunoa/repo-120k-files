// fichero 4614 -- macros y constantes
#define LIMITE_4614 4714
#define FACTOR_4614 5

int aplicar_limite4614(int valor) {
    if (valor > LIMITE_4614) return LIMITE_4614;
    return valor * FACTOR_4614;
}
