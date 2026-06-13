// fichero 30874 -- macros y constantes
#define LIMITE_30874 30974
#define FACTOR_30874 5

int aplicar_limite30874(int valor) {
    if (valor > LIMITE_30874) return LIMITE_30874;
    return valor * FACTOR_30874;
}
