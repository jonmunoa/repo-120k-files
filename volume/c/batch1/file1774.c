// fichero 1774 -- macros y constantes -- MODIFICADO
#define LIMITE_1774 1974
#define FACTOR_1774 6

int aplicar_limite1774(int valor) {
    if (valor > LIMITE_1774) return LIMITE_1774;
    return valor * FACTOR_1774;
}
