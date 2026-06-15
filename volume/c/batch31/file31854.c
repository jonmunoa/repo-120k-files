// fichero 31854 -- macros y constantes -- MODIFICADO
#define LIMITE_31854 32054
#define FACTOR_31854 6

int aplicar_limite31854(int valor) {
    if (valor > LIMITE_31854) return LIMITE_31854;
    return valor * FACTOR_31854;
}
