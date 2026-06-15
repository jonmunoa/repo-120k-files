// fichero 41142 -- macros y constantes -- MODIFICADO
#define LIMITE_41142 41342
#define FACTOR_41142 4

int aplicar_limite41142(int valor) {
    if (valor > LIMITE_41142) return LIMITE_41142;
    return valor * FACTOR_41142;
}
