// fichero 1582 -- macros y constantes -- MODIFICADO
#define LIMITE_1582 1782
#define FACTOR_1582 4

int aplicar_limite1582(int valor) {
    if (valor > LIMITE_1582) return LIMITE_1582;
    return valor * FACTOR_1582;
}
