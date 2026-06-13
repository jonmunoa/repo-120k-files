// fichero 22802 -- macros y constantes
#define LIMITE_22802 22902
#define FACTOR_22802 3

int aplicar_limite22802(int valor) {
    if (valor > LIMITE_22802) return LIMITE_22802;
    return valor * FACTOR_22802;
}
