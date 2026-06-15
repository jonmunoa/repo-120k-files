// fichero 2270 -- macros y constantes -- MODIFICADO
#define LIMITE_2270 2470
#define FACTOR_2270 2

int aplicar_limite2270(int valor) {
    if (valor > LIMITE_2270) return LIMITE_2270;
    return valor * FACTOR_2270;
}
