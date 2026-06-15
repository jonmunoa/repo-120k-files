// fichero 34854 -- macros y constantes -- MODIFICADO
#define LIMITE_34854 35054
#define FACTOR_34854 6

int aplicar_limite34854(int valor) {
    if (valor > LIMITE_34854) return LIMITE_34854;
    return valor * FACTOR_34854;
}
