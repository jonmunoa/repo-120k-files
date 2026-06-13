// fichero 15802 -- macros y constantes
#define LIMITE_15802 15902
#define FACTOR_15802 3

int aplicar_limite15802(int valor) {
    if (valor > LIMITE_15802) return LIMITE_15802;
    return valor * FACTOR_15802;
}
