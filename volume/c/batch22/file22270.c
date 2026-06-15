// fichero 22270 -- macros y constantes -- MODIFICADO
#define LIMITE_22270 22470
#define FACTOR_22270 2

int aplicar_limite22270(int valor) {
    if (valor > LIMITE_22270) return LIMITE_22270;
    return valor * FACTOR_22270;
}
