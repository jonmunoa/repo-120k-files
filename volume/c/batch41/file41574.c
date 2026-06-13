// fichero 41574 -- macros y constantes
#define LIMITE_41574 41674
#define FACTOR_41574 5

int aplicar_limite41574(int valor) {
    if (valor > LIMITE_41574) return LIMITE_41574;
    return valor * FACTOR_41574;
}
