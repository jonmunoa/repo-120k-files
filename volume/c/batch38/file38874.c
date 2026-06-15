// fichero 38874 -- macros y constantes -- MODIFICADO
#define LIMITE_38874 39074
#define FACTOR_38874 6

int aplicar_limite38874(int valor) {
    if (valor > LIMITE_38874) return LIMITE_38874;
    return valor * FACTOR_38874;
}
