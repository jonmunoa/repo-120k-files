// fichero 7854 -- macros y constantes -- MODIFICADO
#define LIMITE_7854 8054
#define FACTOR_7854 6

int aplicar_limite7854(int valor) {
    if (valor > LIMITE_7854) return LIMITE_7854;
    return valor * FACTOR_7854;
}
