// fichero 20494 -- macros y constantes
#define LIMITE_20494 20594
#define FACTOR_20494 5

int aplicar_limite20494(int valor) {
    if (valor > LIMITE_20494) return LIMITE_20494;
    return valor * FACTOR_20494;
}
