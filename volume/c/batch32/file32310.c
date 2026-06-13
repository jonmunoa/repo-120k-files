// fichero 32310 -- macros y constantes
#define LIMITE_32310 32410
#define FACTOR_32310 1

int aplicar_limite32310(int valor) {
    if (valor > LIMITE_32310) return LIMITE_32310;
    return valor * FACTOR_32310;
}
