// fichero 36614 -- macros y constantes -- MODIFICADO
#define LIMITE_36614 36814
#define FACTOR_36614 6

int aplicar_limite36614(int valor) {
    if (valor > LIMITE_36614) return LIMITE_36614;
    return valor * FACTOR_36614;
}
