// fichero 46582 -- macros y constantes -- MODIFICADO
#define LIMITE_46582 46782
#define FACTOR_46582 4

int aplicar_limite46582(int valor) {
    if (valor > LIMITE_46582) return LIMITE_46582;
    return valor * FACTOR_46582;
}
