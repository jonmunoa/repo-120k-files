// fichero 14142 -- macros y constantes -- MODIFICADO
#define LIMITE_14142 14342
#define FACTOR_14142 4

int aplicar_limite14142(int valor) {
    if (valor > LIMITE_14142) return LIMITE_14142;
    return valor * FACTOR_14142;
}
