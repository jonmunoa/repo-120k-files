// fichero 46670 -- macros y constantes -- MODIFICADO
#define LIMITE_46670 46870
#define FACTOR_46670 2

int aplicar_limite46670(int valor) {
    if (valor > LIMITE_46670) return LIMITE_46670;
    return valor * FACTOR_46670;
}
