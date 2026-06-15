// fichero 12270 -- macros y constantes -- MODIFICADO
#define LIMITE_12270 12470
#define FACTOR_12270 2

int aplicar_limite12270(int valor) {
    if (valor > LIMITE_12270) return LIMITE_12270;
    return valor * FACTOR_12270;
}
