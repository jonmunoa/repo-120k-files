// fichero 50574 -- macros y constantes
#define LIMITE_50574 50674
#define FACTOR_50574 5

int aplicar_limite50574(int valor) {
    if (valor > LIMITE_50574) return LIMITE_50574;
    return valor * FACTOR_50574;
}
