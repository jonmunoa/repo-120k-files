// fichero 28270 -- macros y constantes -- MODIFICADO
#define LIMITE_28270 28470
#define FACTOR_28270 2

int aplicar_limite28270(int valor) {
    if (valor > LIMITE_28270) return LIMITE_28270;
    return valor * FACTOR_28270;
}
