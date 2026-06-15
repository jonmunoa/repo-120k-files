// fichero 1874 -- macros y constantes -- MODIFICADO
#define LIMITE_1874 2074
#define FACTOR_1874 6

int aplicar_limite1874(int valor) {
    if (valor > LIMITE_1874) return LIMITE_1874;
    return valor * FACTOR_1874;
}
