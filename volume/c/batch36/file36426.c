// fichero 36426 -- macros y constantes
#define LIMITE_36426 36526
#define FACTOR_36426 2

int aplicar_limite36426(int valor) {
    if (valor > LIMITE_36426) return LIMITE_36426;
    return valor * FACTOR_36426;
}
