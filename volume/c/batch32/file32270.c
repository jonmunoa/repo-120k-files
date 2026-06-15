// fichero 32270 -- macros y constantes -- MODIFICADO
#define LIMITE_32270 32470
#define FACTOR_32270 2

int aplicar_limite32270(int valor) {
    if (valor > LIMITE_32270) return LIMITE_32270;
    return valor * FACTOR_32270;
}
