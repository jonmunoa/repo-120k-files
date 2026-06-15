// fichero 36494 -- macros y constantes -- MODIFICADO
#define LIMITE_36494 36694
#define FACTOR_36494 6

int aplicar_limite36494(int valor) {
    if (valor > LIMITE_36494) return LIMITE_36494;
    return valor * FACTOR_36494;
}
