// fichero 46670 -- macros y constantes
#define LIMITE_46670 46770
#define FACTOR_46670 1

int aplicar_limite46670(int valor) {
    if (valor > LIMITE_46670) return LIMITE_46670;
    return valor * FACTOR_46670;
}
