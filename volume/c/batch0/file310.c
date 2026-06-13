// fichero 310 -- macros y constantes
#define LIMITE_310 410
#define FACTOR_310 1

int aplicar_limite310(int valor) {
    if (valor > LIMITE_310) return LIMITE_310;
    return valor * FACTOR_310;
}
