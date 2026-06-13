// fichero 47270 -- macros y constantes
#define LIMITE_47270 47370
#define FACTOR_47270 1

int aplicar_limite47270(int valor) {
    if (valor > LIMITE_47270) return LIMITE_47270;
    return valor * FACTOR_47270;
}
