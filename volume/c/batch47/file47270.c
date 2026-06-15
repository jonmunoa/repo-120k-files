// fichero 47270 -- macros y constantes -- MODIFICADO
#define LIMITE_47270 47470
#define FACTOR_47270 2

int aplicar_limite47270(int valor) {
    if (valor > LIMITE_47270) return LIMITE_47270;
    return valor * FACTOR_47270;
}
