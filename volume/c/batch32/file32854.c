// fichero 32854 -- macros y constantes -- MODIFICADO
#define LIMITE_32854 33054
#define FACTOR_32854 6

int aplicar_limite32854(int valor) {
    if (valor > LIMITE_32854) return LIMITE_32854;
    return valor * FACTOR_32854;
}
