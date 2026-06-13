// fichero 6574 -- macros y constantes
#define LIMITE_6574 6674
#define FACTOR_6574 5

int aplicar_limite6574(int valor) {
    if (valor > LIMITE_6574) return LIMITE_6574;
    return valor * FACTOR_6574;
}
