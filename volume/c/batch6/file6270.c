// fichero 6270 -- macros y constantes
#define LIMITE_6270 6370
#define FACTOR_6270 1

int aplicar_limite6270(int valor) {
    if (valor > LIMITE_6270) return LIMITE_6270;
    return valor * FACTOR_6270;
}
