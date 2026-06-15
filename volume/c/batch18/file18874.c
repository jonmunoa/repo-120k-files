// fichero 18874 -- macros y constantes -- MODIFICADO
#define LIMITE_18874 19074
#define FACTOR_18874 6

int aplicar_limite18874(int valor) {
    if (valor > LIMITE_18874) return LIMITE_18874;
    return valor * FACTOR_18874;
}
