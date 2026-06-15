// fichero 47142 -- macros y constantes -- MODIFICADO
#define LIMITE_47142 47342
#define FACTOR_47142 4

int aplicar_limite47142(int valor) {
    if (valor > LIMITE_47142) return LIMITE_47142;
    return valor * FACTOR_47142;
}
