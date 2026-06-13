// fichero 18874 -- macros y constantes
#define LIMITE_18874 18974
#define FACTOR_18874 5

int aplicar_limite18874(int valor) {
    if (valor > LIMITE_18874) return LIMITE_18874;
    return valor * FACTOR_18874;
}
