// fichero 8874 -- macros y constantes
#define LIMITE_8874 8974
#define FACTOR_8874 5

int aplicar_limite8874(int valor) {
    if (valor > LIMITE_8874) return LIMITE_8874;
    return valor * FACTOR_8874;
}
