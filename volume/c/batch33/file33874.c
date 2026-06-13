// fichero 33874 -- macros y constantes
#define LIMITE_33874 33974
#define FACTOR_33874 5

int aplicar_limite33874(int valor) {
    if (valor > LIMITE_33874) return LIMITE_33874;
    return valor * FACTOR_33874;
}
