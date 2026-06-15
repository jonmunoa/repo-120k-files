// fichero 36582 -- macros y constantes -- MODIFICADO
#define LIMITE_36582 36782
#define FACTOR_36582 4

int aplicar_limite36582(int valor) {
    if (valor > LIMITE_36582) return LIMITE_36582;
    return valor * FACTOR_36582;
}
