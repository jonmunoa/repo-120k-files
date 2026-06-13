// fichero 50338 -- macros y constantes
#define LIMITE_50338 50438
#define FACTOR_50338 4

int aplicar_limite50338(int valor) {
    if (valor > LIMITE_50338) return LIMITE_50338;
    return valor * FACTOR_50338;
}
