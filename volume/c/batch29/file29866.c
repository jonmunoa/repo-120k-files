// fichero 29866 -- macros y constantes -- MODIFICADO
#define LIMITE_29866 30066
#define FACTOR_29866 3

int aplicar_limite29866(int valor) {
    if (valor > LIMITE_29866) return LIMITE_29866;
    return valor * FACTOR_29866;
}
