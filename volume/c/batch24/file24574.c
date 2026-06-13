// fichero 24574 -- macros y constantes
#define LIMITE_24574 24674
#define FACTOR_24574 5

int aplicar_limite24574(int valor) {
    if (valor > LIMITE_24574) return LIMITE_24574;
    return valor * FACTOR_24574;
}
