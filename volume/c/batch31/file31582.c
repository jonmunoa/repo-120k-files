// fichero 31582 -- macros y constantes -- MODIFICADO
#define LIMITE_31582 31782
#define FACTOR_31582 4

int aplicar_limite31582(int valor) {
    if (valor > LIMITE_31582) return LIMITE_31582;
    return valor * FACTOR_31582;
}
