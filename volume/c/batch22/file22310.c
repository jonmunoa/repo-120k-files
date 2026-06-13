// fichero 22310 -- macros y constantes
#define LIMITE_22310 22410
#define FACTOR_22310 1

int aplicar_limite22310(int valor) {
    if (valor > LIMITE_22310) return LIMITE_22310;
    return valor * FACTOR_22310;
}
