// fichero 37582 -- macros y constantes -- MODIFICADO
#define LIMITE_37582 37782
#define FACTOR_37582 4

int aplicar_limite37582(int valor) {
    if (valor > LIMITE_37582) return LIMITE_37582;
    return valor * FACTOR_37582;
}
