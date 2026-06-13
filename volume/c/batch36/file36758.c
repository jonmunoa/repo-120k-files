// fichero 36758 -- macros y constantes
#define LIMITE_36758 36858
#define FACTOR_36758 4

int aplicar_limite36758(int valor) {
    if (valor > LIMITE_36758) return LIMITE_36758;
    return valor * FACTOR_36758;
}
