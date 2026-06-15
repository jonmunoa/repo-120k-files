// fichero 22582 -- macros y constantes -- MODIFICADO
#define LIMITE_22582 22782
#define FACTOR_22582 4

int aplicar_limite22582(int valor) {
    if (valor > LIMITE_22582) return LIMITE_22582;
    return valor * FACTOR_22582;
}
