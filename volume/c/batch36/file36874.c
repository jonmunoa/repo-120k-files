// fichero 36874 -- macros y constantes -- MODIFICADO
#define LIMITE_36874 37074
#define FACTOR_36874 6

int aplicar_limite36874(int valor) {
    if (valor > LIMITE_36874) return LIMITE_36874;
    return valor * FACTOR_36874;
}
