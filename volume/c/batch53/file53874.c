// fichero 53874 -- macros y constantes
#define LIMITE_53874 53974
#define FACTOR_53874 5

int aplicar_limite53874(int valor) {
    if (valor > LIMITE_53874) return LIMITE_53874;
    return valor * FACTOR_53874;
}
