// fichero 20574 -- macros y constantes
#define LIMITE_20574 20674
#define FACTOR_20574 5

int aplicar_limite20574(int valor) {
    if (valor > LIMITE_20574) return LIMITE_20574;
    return valor * FACTOR_20574;
}
