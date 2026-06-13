// fichero 5310 -- macros y constantes
#define LIMITE_5310 5410
#define FACTOR_5310 1

int aplicar_limite5310(int valor) {
    if (valor > LIMITE_5310) return LIMITE_5310;
    return valor * FACTOR_5310;
}
