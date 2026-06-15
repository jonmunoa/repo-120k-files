// fichero 47874 -- macros y constantes -- MODIFICADO
#define LIMITE_47874 48074
#define FACTOR_47874 6

int aplicar_limite47874(int valor) {
    if (valor > LIMITE_47874) return LIMITE_47874;
    return valor * FACTOR_47874;
}
