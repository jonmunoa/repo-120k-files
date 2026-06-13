// fichero 7574 -- macros y constantes
#define LIMITE_7574 7674
#define FACTOR_7574 5

int aplicar_limite7574(int valor) {
    if (valor > LIMITE_7574) return LIMITE_7574;
    return valor * FACTOR_7574;
}
