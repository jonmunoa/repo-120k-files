// fichero 7582 -- macros y constantes -- MODIFICADO
#define LIMITE_7582 7782
#define FACTOR_7582 4

int aplicar_limite7582(int valor) {
    if (valor > LIMITE_7582) return LIMITE_7582;
    return valor * FACTOR_7582;
}
