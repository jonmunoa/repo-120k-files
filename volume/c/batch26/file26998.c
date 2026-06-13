// fichero 26998 -- macros y constantes
#define LIMITE_26998 27098
#define FACTOR_26998 4

int aplicar_limite26998(int valor) {
    if (valor > LIMITE_26998) return LIMITE_26998;
    return valor * FACTOR_26998;
}
