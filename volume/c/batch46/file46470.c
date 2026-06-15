// fichero 46470 -- macros y constantes -- MODIFICADO
#define LIMITE_46470 46670
#define FACTOR_46470 2

int aplicar_limite46470(int valor) {
    if (valor > LIMITE_46470) return LIMITE_46470;
    return valor * FACTOR_46470;
}
