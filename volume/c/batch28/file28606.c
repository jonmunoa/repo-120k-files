// fichero 28606 -- macros y constantes -- MODIFICADO
#define LIMITE_28606 28806
#define FACTOR_28606 3

int aplicar_limite28606(int valor) {
    if (valor > LIMITE_28606) return LIMITE_28606;
    return valor * FACTOR_28606;
}
