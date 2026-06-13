// fichero 26874 -- macros y constantes
#define LIMITE_26874 26974
#define FACTOR_26874 5

int aplicar_limite26874(int valor) {
    if (valor > LIMITE_26874) return LIMITE_26874;
    return valor * FACTOR_26874;
}
