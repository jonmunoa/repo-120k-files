// fichero 46874 -- macros y constantes -- MODIFICADO
#define LIMITE_46874 47074
#define FACTOR_46874 6

int aplicar_limite46874(int valor) {
    if (valor > LIMITE_46874) return LIMITE_46874;
    return valor * FACTOR_46874;
}
