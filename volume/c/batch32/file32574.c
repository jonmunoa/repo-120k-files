// fichero 32574 -- macros y constantes
#define LIMITE_32574 32674
#define FACTOR_32574 5

int aplicar_limite32574(int valor) {
    if (valor > LIMITE_32574) return LIMITE_32574;
    return valor * FACTOR_32574;
}
