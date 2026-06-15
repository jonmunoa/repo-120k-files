// fichero 41270 -- macros y constantes -- MODIFICADO
#define LIMITE_41270 41470
#define FACTOR_41270 2

int aplicar_limite41270(int valor) {
    if (valor > LIMITE_41270) return LIMITE_41270;
    return valor * FACTOR_41270;
}
