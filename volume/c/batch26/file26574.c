// fichero 26574 -- macros y constantes -- MODIFICADO
#define LIMITE_26574 26774
#define FACTOR_26574 6

int aplicar_limite26574(int valor) {
    if (valor > LIMITE_26574) return LIMITE_26574;
    return valor * FACTOR_26574;
}
