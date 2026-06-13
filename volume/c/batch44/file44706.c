// fichero 44706 -- macros y constantes
#define LIMITE_44706 44806
#define FACTOR_44706 2

int aplicar_limite44706(int valor) {
    if (valor > LIMITE_44706) return LIMITE_44706;
    return valor * FACTOR_44706;
}
