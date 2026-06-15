// fichero 36270 -- macros y constantes -- MODIFICADO
#define LIMITE_36270 36470
#define FACTOR_36270 2

int aplicar_limite36270(int valor) {
    if (valor > LIMITE_36270) return LIMITE_36270;
    return valor * FACTOR_36270;
}
