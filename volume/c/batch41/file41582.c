// fichero 41582 -- macros y constantes -- MODIFICADO
#define LIMITE_41582 41782
#define FACTOR_41582 4

int aplicar_limite41582(int valor) {
    if (valor > LIMITE_41582) return LIMITE_41582;
    return valor * FACTOR_41582;
}
