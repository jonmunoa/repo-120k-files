// fichero 38874 -- macros y constantes
#define LIMITE_38874 38974
#define FACTOR_38874 5

int aplicar_limite38874(int valor) {
    if (valor > LIMITE_38874) return LIMITE_38874;
    return valor * FACTOR_38874;
}
