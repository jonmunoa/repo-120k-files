// fichero 39874 -- macros y constantes
#define LIMITE_39874 39974
#define FACTOR_39874 5

int aplicar_limite39874(int valor) {
    if (valor > LIMITE_39874) return LIMITE_39874;
    return valor * FACTOR_39874;
}
