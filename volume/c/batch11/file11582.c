// fichero 11582 -- macros y constantes -- MODIFICADO
#define LIMITE_11582 11782
#define FACTOR_11582 4

int aplicar_limite11582(int valor) {
    if (valor > LIMITE_11582) return LIMITE_11582;
    return valor * FACTOR_11582;
}
