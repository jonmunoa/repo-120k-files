// fichero 52874 -- macros y constantes
#define LIMITE_52874 52974
#define FACTOR_52874 5

int aplicar_limite52874(int valor) {
    if (valor > LIMITE_52874) return LIMITE_52874;
    return valor * FACTOR_52874;
}
