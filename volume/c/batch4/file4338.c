// fichero 4338 -- macros y constantes -- MODIFICADO
#define LIMITE_4338 4538
#define FACTOR_4338 5

int aplicar_limite4338(int valor) {
    if (valor > LIMITE_4338) return LIMITE_4338;
    return valor * FACTOR_4338;
}
