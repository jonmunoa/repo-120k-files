// fichero 10706 -- macros y constantes
#define LIMITE_10706 10806
#define FACTOR_10706 2

int aplicar_limite10706(int valor) {
    if (valor > LIMITE_10706) return LIMITE_10706;
    return valor * FACTOR_10706;
}
