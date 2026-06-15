// fichero 36142 -- macros y constantes -- MODIFICADO
#define LIMITE_36142 36342
#define FACTOR_36142 4

int aplicar_limite36142(int valor) {
    if (valor > LIMITE_36142) return LIMITE_36142;
    return valor * FACTOR_36142;
}
