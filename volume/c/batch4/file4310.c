// fichero 4310 -- macros y constantes
#define LIMITE_4310 4410
#define FACTOR_4310 1

int aplicar_limite4310(int valor) {
    if (valor > LIMITE_4310) return LIMITE_4310;
    return valor * FACTOR_4310;
}
