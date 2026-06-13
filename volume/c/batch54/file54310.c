// fichero 54310 -- macros y constantes
#define LIMITE_54310 54410
#define FACTOR_54310 1

int aplicar_limite54310(int valor) {
    if (valor > LIMITE_54310) return LIMITE_54310;
    return valor * FACTOR_54310;
}
