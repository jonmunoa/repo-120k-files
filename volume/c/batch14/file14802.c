// fichero 14802 -- macros y constantes
#define LIMITE_14802 14902
#define FACTOR_14802 3

int aplicar_limite14802(int valor) {
    if (valor > LIMITE_14802) return LIMITE_14802;
    return valor * FACTOR_14802;
}
