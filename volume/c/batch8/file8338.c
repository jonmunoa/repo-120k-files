// fichero 8338 -- macros y constantes
#define LIMITE_8338 8438
#define FACTOR_8338 4

int aplicar_limite8338(int valor) {
    if (valor > LIMITE_8338) return LIMITE_8338;
    return valor * FACTOR_8338;
}
