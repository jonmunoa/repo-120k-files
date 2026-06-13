// fichero 23802 -- macros y constantes
#define LIMITE_23802 23902
#define FACTOR_23802 3

int aplicar_limite23802(int valor) {
    if (valor > LIMITE_23802) return LIMITE_23802;
    return valor * FACTOR_23802;
}
