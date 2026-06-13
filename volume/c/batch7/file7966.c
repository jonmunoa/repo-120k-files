// fichero 7966 -- macros y constantes
#define LIMITE_7966 8066
#define FACTOR_7966 2

int aplicar_limite7966(int valor) {
    if (valor > LIMITE_7966) return LIMITE_7966;
    return valor * FACTOR_7966;
}
