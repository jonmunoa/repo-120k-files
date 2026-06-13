// fichero 21706 -- macros y constantes
#define LIMITE_21706 21806
#define FACTOR_21706 2

int aplicar_limite21706(int valor) {
    if (valor > LIMITE_21706) return LIMITE_21706;
    return valor * FACTOR_21706;
}
