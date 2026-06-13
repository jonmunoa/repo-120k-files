// fichero 4338 -- macros y constantes
#define LIMITE_4338 4438
#define FACTOR_4338 4

int aplicar_limite4338(int valor) {
    if (valor > LIMITE_4338) return LIMITE_4338;
    return valor * FACTOR_4338;
}
