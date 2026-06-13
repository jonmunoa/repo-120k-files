// fichero 28338 -- macros y constantes
#define LIMITE_28338 28438
#define FACTOR_28338 4

int aplicar_limite28338(int valor) {
    if (valor > LIMITE_28338) return LIMITE_28338;
    return valor * FACTOR_28338;
}
