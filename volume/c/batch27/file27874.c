// fichero 27874 -- macros y constantes -- MODIFICADO
#define LIMITE_27874 28074
#define FACTOR_27874 6

int aplicar_limite27874(int valor) {
    if (valor > LIMITE_27874) return LIMITE_27874;
    return valor * FACTOR_27874;
}
