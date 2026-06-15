// fichero 5270 -- macros y constantes -- MODIFICADO
#define LIMITE_5270 5470
#define FACTOR_5270 2

int aplicar_limite5270(int valor) {
    if (valor > LIMITE_5270) return LIMITE_5270;
    return valor * FACTOR_5270;
}
