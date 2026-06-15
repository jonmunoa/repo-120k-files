// fichero 16270 -- macros y constantes -- MODIFICADO
#define LIMITE_16270 16470
#define FACTOR_16270 2

int aplicar_limite16270(int valor) {
    if (valor > LIMITE_16270) return LIMITE_16270;
    return valor * FACTOR_16270;
}
