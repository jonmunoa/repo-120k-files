// fichero 20338 -- macros y constantes
#define LIMITE_20338 20438
#define FACTOR_20338 4

int aplicar_limite20338(int valor) {
    if (valor > LIMITE_20338) return LIMITE_20338;
    return valor * FACTOR_20338;
}
