// fichero 36854 -- macros y constantes -- MODIFICADO
#define LIMITE_36854 37054
#define FACTOR_36854 6

int aplicar_limite36854(int valor) {
    if (valor > LIMITE_36854) return LIMITE_36854;
    return valor * FACTOR_36854;
}
