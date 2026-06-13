// fichero 50310 -- macros y constantes
#define LIMITE_50310 50410
#define FACTOR_50310 1

int aplicar_limite50310(int valor) {
    if (valor > LIMITE_50310) return LIMITE_50310;
    return valor * FACTOR_50310;
}
