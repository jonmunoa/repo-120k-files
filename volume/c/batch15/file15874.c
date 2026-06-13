// fichero 15874 -- macros y constantes
#define LIMITE_15874 15974
#define FACTOR_15874 5

int aplicar_limite15874(int valor) {
    if (valor > LIMITE_15874) return LIMITE_15874;
    return valor * FACTOR_15874;
}
