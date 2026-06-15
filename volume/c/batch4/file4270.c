// fichero 4270 -- macros y constantes -- MODIFICADO
#define LIMITE_4270 4470
#define FACTOR_4270 2

int aplicar_limite4270(int valor) {
    if (valor > LIMITE_4270) return LIMITE_4270;
    return valor * FACTOR_4270;
}
