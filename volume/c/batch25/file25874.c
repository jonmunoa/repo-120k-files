// fichero 25874 -- macros y constantes
#define LIMITE_25874 25974
#define FACTOR_25874 5

int aplicar_limite25874(int valor) {
    if (valor > LIMITE_25874) return LIMITE_25874;
    return valor * FACTOR_25874;
}
