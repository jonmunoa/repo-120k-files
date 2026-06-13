// fichero 7874 -- macros y constantes
#define LIMITE_7874 7974
#define FACTOR_7874 5

int aplicar_limite7874(int valor) {
    if (valor > LIMITE_7874) return LIMITE_7874;
    return valor * FACTOR_7874;
}
