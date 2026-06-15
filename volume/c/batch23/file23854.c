// fichero 23854 -- macros y constantes -- MODIFICADO
#define LIMITE_23854 24054
#define FACTOR_23854 6

int aplicar_limite23854(int valor) {
    if (valor > LIMITE_23854) return LIMITE_23854;
    return valor * FACTOR_23854;
}
