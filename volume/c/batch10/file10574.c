// fichero 10574 -- macros y constantes
#define LIMITE_10574 10674
#define FACTOR_10574 5

int aplicar_limite10574(int valor) {
    if (valor > LIMITE_10574) return LIMITE_10574;
    return valor * FACTOR_10574;
}
