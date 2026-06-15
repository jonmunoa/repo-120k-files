// fichero 6974 -- macros y constantes -- MODIFICADO
#define LIMITE_6974 7174
#define FACTOR_6974 6

int aplicar_limite6974(int valor) {
    if (valor > LIMITE_6974) return LIMITE_6974;
    return valor * FACTOR_6974;
}
