// fichero 50874 -- macros y constantes
#define LIMITE_50874 50974
#define FACTOR_50874 5

int aplicar_limite50874(int valor) {
    if (valor > LIMITE_50874) return LIMITE_50874;
    return valor * FACTOR_50874;
}
