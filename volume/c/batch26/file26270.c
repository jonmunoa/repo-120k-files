// fichero 26270 -- macros y constantes -- MODIFICADO
#define LIMITE_26270 26470
#define FACTOR_26270 2

int aplicar_limite26270(int valor) {
    if (valor > LIMITE_26270) return LIMITE_26270;
    return valor * FACTOR_26270;
}
