// fichero 338 -- macros y constantes
#define LIMITE_338 438
#define FACTOR_338 4

int aplicar_limite338(int valor) {
    if (valor > LIMITE_338) return LIMITE_338;
    return valor * FACTOR_338;
}
