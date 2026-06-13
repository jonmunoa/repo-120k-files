// fichero 9574 -- macros y constantes
#define LIMITE_9574 9674
#define FACTOR_9574 5

int aplicar_limite9574(int valor) {
    if (valor > LIMITE_9574) return LIMITE_9574;
    return valor * FACTOR_9574;
}
