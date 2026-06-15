// fichero 35854 -- macros y constantes -- MODIFICADO
#define LIMITE_35854 36054
#define FACTOR_35854 6

int aplicar_limite35854(int valor) {
    if (valor > LIMITE_35854) return LIMITE_35854;
    return valor * FACTOR_35854;
}
