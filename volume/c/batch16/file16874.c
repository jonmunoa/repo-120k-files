// fichero 16874 -- macros y constantes
#define LIMITE_16874 16974
#define FACTOR_16874 5

int aplicar_limite16874(int valor) {
    if (valor > LIMITE_16874) return LIMITE_16874;
    return valor * FACTOR_16874;
}
