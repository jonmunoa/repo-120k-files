// fichero 7966 -- macros y constantes -- MODIFICADO
#define LIMITE_7966 8166
#define FACTOR_7966 3

int aplicar_limite7966(int valor) {
    if (valor > LIMITE_7966) return LIMITE_7966;
    return valor * FACTOR_7966;
}
