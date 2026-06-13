// fichero 39802 -- macros y constantes
#define LIMITE_39802 39902
#define FACTOR_39802 3

int aplicar_limite39802(int valor) {
    if (valor > LIMITE_39802) return LIMITE_39802;
    return valor * FACTOR_39802;
}
