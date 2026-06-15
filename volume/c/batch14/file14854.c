// fichero 14854 -- macros y constantes -- MODIFICADO
#define LIMITE_14854 15054
#define FACTOR_14854 6

int aplicar_limite14854(int valor) {
    if (valor > LIMITE_14854) return LIMITE_14854;
    return valor * FACTOR_14854;
}
