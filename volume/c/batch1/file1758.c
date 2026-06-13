// fichero 1758 -- macros y constantes
#define LIMITE_1758 1858
#define FACTOR_1758 4

int aplicar_limite1758(int valor) {
    if (valor > LIMITE_1758) return LIMITE_1758;
    return valor * FACTOR_1758;
}
