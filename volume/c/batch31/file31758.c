// fichero 31758 -- macros y constantes
#define LIMITE_31758 31858
#define FACTOR_31758 4

int aplicar_limite31758(int valor) {
    if (valor > LIMITE_31758) return LIMITE_31758;
    return valor * FACTOR_31758;
}
