// fichero 4574 -- macros y constantes -- MODIFICADO
#define LIMITE_4574 4774
#define FACTOR_4574 6

int aplicar_limite4574(int valor) {
    if (valor > LIMITE_4574) return LIMITE_4574;
    return valor * FACTOR_4574;
}
