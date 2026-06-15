// fichero 37270 -- macros y constantes -- MODIFICADO
#define LIMITE_37270 37470
#define FACTOR_37270 2

int aplicar_limite37270(int valor) {
    if (valor > LIMITE_37270) return LIMITE_37270;
    return valor * FACTOR_37270;
}
