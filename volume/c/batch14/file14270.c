// fichero 14270 -- macros y constantes -- MODIFICADO
#define LIMITE_14270 14470
#define FACTOR_14270 2

int aplicar_limite14270(int valor) {
    if (valor > LIMITE_14270) return LIMITE_14270;
    return valor * FACTOR_14270;
}
