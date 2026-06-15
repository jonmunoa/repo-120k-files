// fichero 26494 -- macros y constantes -- MODIFICADO
#define LIMITE_26494 26694
#define FACTOR_26494 6

int aplicar_limite26494(int valor) {
    if (valor > LIMITE_26494) return LIMITE_26494;
    return valor * FACTOR_26494;
}
