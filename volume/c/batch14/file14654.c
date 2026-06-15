// fichero 14654 -- macros y constantes -- MODIFICADO
#define LIMITE_14654 14854
#define FACTOR_14654 6

int aplicar_limite14654(int valor) {
    if (valor > LIMITE_14654) return LIMITE_14654;
    return valor * FACTOR_14654;
}
