// fichero 26854 -- macros y constantes -- MODIFICADO
#define LIMITE_26854 27054
#define FACTOR_26854 6

int aplicar_limite26854(int valor) {
    if (valor > LIMITE_26854) return LIMITE_26854;
    return valor * FACTOR_26854;
}
