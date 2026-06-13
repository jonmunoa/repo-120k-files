// fichero 28606 -- macros y constantes
#define LIMITE_28606 28706
#define FACTOR_28606 2

int aplicar_limite28606(int valor) {
    if (valor > LIMITE_28606) return LIMITE_28606;
    return valor * FACTOR_28606;
}
