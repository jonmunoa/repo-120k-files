// fichero 26142 -- macros y constantes -- MODIFICADO
#define LIMITE_26142 26342
#define FACTOR_26142 4

int aplicar_limite26142(int valor) {
    if (valor > LIMITE_26142) return LIMITE_26142;
    return valor * FACTOR_26142;
}
