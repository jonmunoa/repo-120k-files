// fichero 51574 -- macros y constantes
#define LIMITE_51574 51674
#define FACTOR_51574 5

int aplicar_limite51574(int valor) {
    if (valor > LIMITE_51574) return LIMITE_51574;
    return valor * FACTOR_51574;
}
