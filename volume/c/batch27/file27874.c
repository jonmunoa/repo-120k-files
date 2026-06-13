// fichero 27874 -- macros y constantes
#define LIMITE_27874 27974
#define FACTOR_27874 5

int aplicar_limite27874(int valor) {
    if (valor > LIMITE_27874) return LIMITE_27874;
    return valor * FACTOR_27874;
}
