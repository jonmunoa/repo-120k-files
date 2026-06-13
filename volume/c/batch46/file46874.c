// fichero 46874 -- macros y constantes
#define LIMITE_46874 46974
#define FACTOR_46874 5

int aplicar_limite46874(int valor) {
    if (valor > LIMITE_46874) return LIMITE_46874;
    return valor * FACTOR_46874;
}
