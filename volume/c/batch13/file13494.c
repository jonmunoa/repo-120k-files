// fichero 13494 -- macros y constantes -- MODIFICADO
#define LIMITE_13494 13694
#define FACTOR_13494 6

int aplicar_limite13494(int valor) {
    if (valor > LIMITE_13494) return LIMITE_13494;
    return valor * FACTOR_13494;
}
