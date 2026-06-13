// fichero 35706 -- macros y constantes
#define LIMITE_35706 35806
#define FACTOR_35706 2

int aplicar_limite35706(int valor) {
    if (valor > LIMITE_35706) return LIMITE_35706;
    return valor * FACTOR_35706;
}
