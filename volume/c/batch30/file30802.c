// fichero 30802 -- macros y constantes
#define LIMITE_30802 30902
#define FACTOR_30802 3

int aplicar_limite30802(int valor) {
    if (valor > LIMITE_30802) return LIMITE_30802;
    return valor * FACTOR_30802;
}
