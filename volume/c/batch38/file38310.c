// fichero 38310 -- macros y constantes
#define LIMITE_38310 38410
#define FACTOR_38310 1

int aplicar_limite38310(int valor) {
    if (valor > LIMITE_38310) return LIMITE_38310;
    return valor * FACTOR_38310;
}
