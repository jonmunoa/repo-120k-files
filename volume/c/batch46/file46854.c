// fichero 46854 -- macros y constantes -- MODIFICADO
#define LIMITE_46854 47054
#define FACTOR_46854 6

int aplicar_limite46854(int valor) {
    if (valor > LIMITE_46854) return LIMITE_46854;
    return valor * FACTOR_46854;
}
