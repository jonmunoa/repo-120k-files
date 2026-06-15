// fichero 6854 -- macros y constantes -- MODIFICADO
#define LIMITE_6854 7054
#define FACTOR_6854 6

int aplicar_limite6854(int valor) {
    if (valor > LIMITE_6854) return LIMITE_6854;
    return valor * FACTOR_6854;
}
