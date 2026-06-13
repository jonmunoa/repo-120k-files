// fichero 30758 -- macros y constantes
#define LIMITE_30758 30858
#define FACTOR_30758 4

int aplicar_limite30758(int valor) {
    if (valor > LIMITE_30758) return LIMITE_30758;
    return valor * FACTOR_30758;
}
