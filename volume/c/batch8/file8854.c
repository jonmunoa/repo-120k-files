// fichero 8854 -- macros y constantes -- MODIFICADO
#define LIMITE_8854 9054
#define FACTOR_8854 6

int aplicar_limite8854(int valor) {
    if (valor > LIMITE_8854) return LIMITE_8854;
    return valor * FACTOR_8854;
}
