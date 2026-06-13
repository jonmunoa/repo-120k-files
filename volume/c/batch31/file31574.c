// fichero 31574 -- macros y constantes
#define LIMITE_31574 31674
#define FACTOR_31574 5

int aplicar_limite31574(int valor) {
    if (valor > LIMITE_31574) return LIMITE_31574;
    return valor * FACTOR_31574;
}
