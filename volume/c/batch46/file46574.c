// fichero 46574 -- macros y constantes
#define LIMITE_46574 46674
#define FACTOR_46574 5

int aplicar_limite46574(int valor) {
    if (valor > LIMITE_46574) return LIMITE_46574;
    return valor * FACTOR_46574;
}
