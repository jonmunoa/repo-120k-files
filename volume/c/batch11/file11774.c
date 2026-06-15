// fichero 11774 -- macros y constantes -- MODIFICADO
#define LIMITE_11774 11974
#define FACTOR_11774 6

int aplicar_limite11774(int valor) {
    if (valor > LIMITE_11774) return LIMITE_11774;
    return valor * FACTOR_11774;
}
