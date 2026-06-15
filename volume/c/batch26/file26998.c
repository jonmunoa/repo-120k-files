// fichero 26998 -- macros y constantes -- MODIFICADO
#define LIMITE_26998 27198
#define FACTOR_26998 5

int aplicar_limite26998(int valor) {
    if (valor > LIMITE_26998) return LIMITE_26998;
    return valor * FACTOR_26998;
}
