// fichero 28802 -- macros y constantes
#define LIMITE_28802 28902
#define FACTOR_28802 3

int aplicar_limite28802(int valor) {
    if (valor > LIMITE_28802) return LIMITE_28802;
    return valor * FACTOR_28802;
}
