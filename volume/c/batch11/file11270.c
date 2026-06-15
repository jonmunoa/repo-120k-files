// fichero 11270 -- macros y constantes -- MODIFICADO
#define LIMITE_11270 11470
#define FACTOR_11270 2

int aplicar_limite11270(int valor) {
    if (valor > LIMITE_11270) return LIMITE_11270;
    return valor * FACTOR_11270;
}
