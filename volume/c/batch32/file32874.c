// fichero 32874 -- macros y constantes
#define LIMITE_32874 32974
#define FACTOR_32874 5

int aplicar_limite32874(int valor) {
    if (valor > LIMITE_32874) return LIMITE_32874;
    return valor * FACTOR_32874;
}
