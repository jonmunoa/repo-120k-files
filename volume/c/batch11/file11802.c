// fichero 11802 -- macros y constantes
#define LIMITE_11802 11902
#define FACTOR_11802 3

int aplicar_limite11802(int valor) {
    if (valor > LIMITE_11802) return LIMITE_11802;
    return valor * FACTOR_11802;
}
