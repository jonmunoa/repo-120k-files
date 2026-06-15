// fichero 31270 -- macros y constantes -- MODIFICADO
#define LIMITE_31270 31470
#define FACTOR_31270 2

int aplicar_limite31270(int valor) {
    if (valor > LIMITE_31270) return LIMITE_31270;
    return valor * FACTOR_31270;
}
