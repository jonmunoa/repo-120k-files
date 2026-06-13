// fichero 1706 -- macros y constantes
#define LIMITE_1706 1806
#define FACTOR_1706 2

int aplicar_limite1706(int valor) {
    if (valor > LIMITE_1706) return LIMITE_1706;
    return valor * FACTOR_1706;
}
