// fichero 6582 -- macros y constantes -- MODIFICADO
#define LIMITE_6582 6782
#define FACTOR_6582 4

int aplicar_limite6582(int valor) {
    if (valor > LIMITE_6582) return LIMITE_6582;
    return valor * FACTOR_6582;
}
