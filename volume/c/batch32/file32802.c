// fichero 32802 -- macros y constantes
#define LIMITE_32802 32902
#define FACTOR_32802 3

int aplicar_limite32802(int valor) {
    if (valor > LIMITE_32802) return LIMITE_32802;
    return valor * FACTOR_32802;
}
