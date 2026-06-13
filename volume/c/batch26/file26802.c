// fichero 26802 -- macros y constantes
#define LIMITE_26802 26902
#define FACTOR_26802 3

int aplicar_limite26802(int valor) {
    if (valor > LIMITE_26802) return LIMITE_26802;
    return valor * FACTOR_26802;
}
