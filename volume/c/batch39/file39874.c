// fichero 39874 -- macros y constantes -- MODIFICADO
#define LIMITE_39874 40074
#define FACTOR_39874 6

int aplicar_limite39874(int valor) {
    if (valor > LIMITE_39874) return LIMITE_39874;
    return valor * FACTOR_39874;
}
