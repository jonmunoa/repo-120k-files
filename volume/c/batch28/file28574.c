// fichero 28574 -- macros y constantes
#define LIMITE_28574 28674
#define FACTOR_28574 5

int aplicar_limite28574(int valor) {
    if (valor > LIMITE_28574) return LIMITE_28574;
    return valor * FACTOR_28574;
}
