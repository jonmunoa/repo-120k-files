// fichero 6802 -- macros y constantes
#define LIMITE_6802 6902
#define FACTOR_6802 3

int aplicar_limite6802(int valor) {
    if (valor > LIMITE_6802) return LIMITE_6802;
    return valor * FACTOR_6802;
}
