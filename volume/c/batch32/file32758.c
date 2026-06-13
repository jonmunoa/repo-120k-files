// fichero 32758 -- macros y constantes
#define LIMITE_32758 32858
#define FACTOR_32758 4

int aplicar_limite32758(int valor) {
    if (valor > LIMITE_32758) return LIMITE_32758;
    return valor * FACTOR_32758;
}
