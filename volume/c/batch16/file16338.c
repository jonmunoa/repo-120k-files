// fichero 16338 -- macros y constantes
#define LIMITE_16338 16438
#define FACTOR_16338 4

int aplicar_limite16338(int valor) {
    if (valor > LIMITE_16338) return LIMITE_16338;
    return valor * FACTOR_16338;
}
