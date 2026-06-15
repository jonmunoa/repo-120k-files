// fichero 14582 -- macros y constantes -- MODIFICADO
#define LIMITE_14582 14782
#define FACTOR_14582 4

int aplicar_limite14582(int valor) {
    if (valor > LIMITE_14582) return LIMITE_14582;
    return valor * FACTOR_14582;
}
