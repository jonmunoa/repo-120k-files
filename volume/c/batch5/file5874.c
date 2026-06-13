// fichero 5874 -- macros y constantes
#define LIMITE_5874 5974
#define FACTOR_5874 5

int aplicar_limite5874(int valor) {
    if (valor > LIMITE_5874) return LIMITE_5874;
    return valor * FACTOR_5874;
}
