// fichero 26758 -- macros y constantes -- MODIFICADO
#define LIMITE_26758 26958
#define FACTOR_26758 5

int aplicar_limite26758(int valor) {
    if (valor > LIMITE_26758) return LIMITE_26758;
    return valor * FACTOR_26758;
}
