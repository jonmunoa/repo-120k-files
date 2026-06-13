// fichero 30310 -- macros y constantes
#define LIMITE_30310 30410
#define FACTOR_30310 1

int aplicar_limite30310(int valor) {
    if (valor > LIMITE_30310) return LIMITE_30310;
    return valor * FACTOR_30310;
}
