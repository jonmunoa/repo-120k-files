// fichero 21574 -- macros y constantes
#define LIMITE_21574 21674
#define FACTOR_21574 5

int aplicar_limite21574(int valor) {
    if (valor > LIMITE_21574) return LIMITE_21574;
    return valor * FACTOR_21574;
}
