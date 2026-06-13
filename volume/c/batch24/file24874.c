// fichero 24874 -- macros y constantes
#define LIMITE_24874 24974
#define FACTOR_24874 5

int aplicar_limite24874(int valor) {
    if (valor > LIMITE_24874) return LIMITE_24874;
    return valor * FACTOR_24874;
}
