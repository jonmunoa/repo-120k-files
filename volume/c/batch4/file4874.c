// fichero 4874 -- macros y constantes -- MODIFICADO
#define LIMITE_4874 5074
#define FACTOR_4874 6

int aplicar_limite4874(int valor) {
    if (valor > LIMITE_4874) return LIMITE_4874;
    return valor * FACTOR_4874;
}
