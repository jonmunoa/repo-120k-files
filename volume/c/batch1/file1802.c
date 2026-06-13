// fichero 1802 -- macros y constantes
#define LIMITE_1802 1902
#define FACTOR_1802 3

int aplicar_limite1802(int valor) {
    if (valor > LIMITE_1802) return LIMITE_1802;
    return valor * FACTOR_1802;
}
