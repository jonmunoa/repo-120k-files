// fichero 12802 -- macros y constantes
#define LIMITE_12802 12902
#define FACTOR_12802 3

int aplicar_limite12802(int valor) {
    if (valor > LIMITE_12802) return LIMITE_12802;
    return valor * FACTOR_12802;
}
