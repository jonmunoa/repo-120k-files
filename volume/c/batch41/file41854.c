// fichero 41854 -- macros y constantes -- MODIFICADO
#define LIMITE_41854 42054
#define FACTOR_41854 6

int aplicar_limite41854(int valor) {
    if (valor > LIMITE_41854) return LIMITE_41854;
    return valor * FACTOR_41854;
}
