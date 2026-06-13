// fichero 18574 -- macros y constantes
#define LIMITE_18574 18674
#define FACTOR_18574 5

int aplicar_limite18574(int valor) {
    if (valor > LIMITE_18574) return LIMITE_18574;
    return valor * FACTOR_18574;
}
