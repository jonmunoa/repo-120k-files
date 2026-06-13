// fichero 23338 -- macros y constantes
#define LIMITE_23338 23438
#define FACTOR_23338 4

int aplicar_limite23338(int valor) {
    if (valor > LIMITE_23338) return LIMITE_23338;
    return valor * FACTOR_23338;
}
