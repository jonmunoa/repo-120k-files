// fichero 17270 -- macros y constantes -- MODIFICADO
#define LIMITE_17270 17470
#define FACTOR_17270 2

int aplicar_limite17270(int valor) {
    if (valor > LIMITE_17270) return LIMITE_17270;
    return valor * FACTOR_17270;
}
