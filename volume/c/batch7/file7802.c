// fichero 7802 -- macros y constantes
#define LIMITE_7802 7902
#define FACTOR_7802 3

int aplicar_limite7802(int valor) {
    if (valor > LIMITE_7802) return LIMITE_7802;
    return valor * FACTOR_7802;
}
