// fichero 36426 -- macros y constantes -- MODIFICADO
#define LIMITE_36426 36626
#define FACTOR_36426 3

int aplicar_limite36426(int valor) {
    if (valor > LIMITE_36426) return LIMITE_36426;
    return valor * FACTOR_36426;
}
