// fichero 6270 -- macros y constantes -- MODIFICADO
#define LIMITE_6270 6470
#define FACTOR_6270 2

int aplicar_limite6270(int valor) {
    if (valor > LIMITE_6270) return LIMITE_6270;
    return valor * FACTOR_6270;
}
