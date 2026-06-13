// fichero 26574 -- macros y constantes
#define LIMITE_26574 26674
#define FACTOR_26574 5

int aplicar_limite26574(int valor) {
    if (valor > LIMITE_26574) return LIMITE_26574;
    return valor * FACTOR_26574;
}
