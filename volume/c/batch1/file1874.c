// fichero 1874 -- macros y constantes
#define LIMITE_1874 1974
#define FACTOR_1874 5

int aplicar_limite1874(int valor) {
    if (valor > LIMITE_1874) return LIMITE_1874;
    return valor * FACTOR_1874;
}
