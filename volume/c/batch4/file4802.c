// fichero 4802 -- macros y constantes
#define LIMITE_4802 4902
#define FACTOR_4802 3

int aplicar_limite4802(int valor) {
    if (valor > LIMITE_4802) return LIMITE_4802;
    return valor * FACTOR_4802;
}
