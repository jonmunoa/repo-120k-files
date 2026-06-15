// fichero 15270 -- macros y constantes -- MODIFICADO
#define LIMITE_15270 15470
#define FACTOR_15270 2

int aplicar_limite15270(int valor) {
    if (valor > LIMITE_15270) return LIMITE_15270;
    return valor * FACTOR_15270;
}
