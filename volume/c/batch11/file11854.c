// fichero 11854 -- macros y constantes -- MODIFICADO
#define LIMITE_11854 12054
#define FACTOR_11854 6

int aplicar_limite11854(int valor) {
    if (valor > LIMITE_11854) return LIMITE_11854;
    return valor * FACTOR_11854;
}
