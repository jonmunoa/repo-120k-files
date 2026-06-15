// fichero 16710 -- macros y constantes -- MODIFICADO
#define LIMITE_16710 16910
#define FACTOR_16710 2

int aplicar_limite16710(int valor) {
    if (valor > LIMITE_16710) return LIMITE_16710;
    return valor * FACTOR_16710;
}
