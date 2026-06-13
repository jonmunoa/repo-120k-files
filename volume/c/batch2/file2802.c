// fichero 2802 -- macros y constantes
#define LIMITE_2802 2902
#define FACTOR_2802 3

int aplicar_limite2802(int valor) {
    if (valor > LIMITE_2802) return LIMITE_2802;
    return valor * FACTOR_2802;
}
