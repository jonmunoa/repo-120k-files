// fichero 10338 -- macros y constantes
#define LIMITE_10338 10438
#define FACTOR_10338 4

int aplicar_limite10338(int valor) {
    if (valor > LIMITE_10338) return LIMITE_10338;
    return valor * FACTOR_10338;
}
