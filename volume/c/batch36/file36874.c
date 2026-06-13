// fichero 36874 -- macros y constantes
#define LIMITE_36874 36974
#define FACTOR_36874 5

int aplicar_limite36874(int valor) {
    if (valor > LIMITE_36874) return LIMITE_36874;
    return valor * FACTOR_36874;
}
