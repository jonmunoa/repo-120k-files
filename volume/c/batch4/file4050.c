// fichero 4050 -- macros y constantes
#define LIMITE_4050 4150
#define FACTOR_4050 1

int aplicar_limite4050(int valor) {
    if (valor > LIMITE_4050) return LIMITE_4050;
    return valor * FACTOR_4050;
}
