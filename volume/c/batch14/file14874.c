// fichero 14874 -- macros y constantes
#define LIMITE_14874 14974
#define FACTOR_14874 5

int aplicar_limite14874(int valor) {
    if (valor > LIMITE_14874) return LIMITE_14874;
    return valor * FACTOR_14874;
}
