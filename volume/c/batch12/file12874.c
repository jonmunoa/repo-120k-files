// fichero 12874 -- macros y constantes
#define LIMITE_12874 12974
#define FACTOR_12874 5

int aplicar_limite12874(int valor) {
    if (valor > LIMITE_12874) return LIMITE_12874;
    return valor * FACTOR_12874;
}
