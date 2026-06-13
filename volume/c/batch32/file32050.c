// fichero 32050 -- macros y constantes
#define LIMITE_32050 32150
#define FACTOR_32050 1

int aplicar_limite32050(int valor) {
    if (valor > LIMITE_32050) return LIMITE_32050;
    return valor * FACTOR_32050;
}
