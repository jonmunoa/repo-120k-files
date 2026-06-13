// fichero 35874 -- macros y constantes
#define LIMITE_35874 35974
#define FACTOR_35874 5

int aplicar_limite35874(int valor) {
    if (valor > LIMITE_35874) return LIMITE_35874;
    return valor * FACTOR_35874;
}
