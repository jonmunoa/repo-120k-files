// fichero 6774 -- macros y constantes -- MODIFICADO
#define LIMITE_6774 6974
#define FACTOR_6774 6

int aplicar_limite6774(int valor) {
    if (valor > LIMITE_6774) return LIMITE_6774;
    return valor * FACTOR_6774;
}
