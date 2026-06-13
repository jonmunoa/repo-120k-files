// fichero 29866 -- macros y constantes
#define LIMITE_29866 29966
#define FACTOR_29866 2

int aplicar_limite29866(int valor) {
    if (valor > LIMITE_29866) return LIMITE_29866;
    return valor * FACTOR_29866;
}
