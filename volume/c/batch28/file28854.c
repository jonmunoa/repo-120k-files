// fichero 28854 -- macros y constantes -- MODIFICADO
#define LIMITE_28854 29054
#define FACTOR_28854 6

int aplicar_limite28854(int valor) {
    if (valor > LIMITE_28854) return LIMITE_28854;
    return valor * FACTOR_28854;
}
