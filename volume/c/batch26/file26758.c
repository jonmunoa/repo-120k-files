// fichero 26758 -- macros y constantes
#define LIMITE_26758 26858
#define FACTOR_26758 4

int aplicar_limite26758(int valor) {
    if (valor > LIMITE_26758) return LIMITE_26758;
    return valor * FACTOR_26758;
}
