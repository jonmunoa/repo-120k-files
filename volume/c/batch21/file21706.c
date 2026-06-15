// fichero 21706 -- macros y constantes -- MODIFICADO
#define LIMITE_21706 21906
#define FACTOR_21706 3

int aplicar_limite21706(int valor) {
    if (valor > LIMITE_21706) return LIMITE_21706;
    return valor * FACTOR_21706;
}
