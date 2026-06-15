// fichero 5874 -- macros y constantes -- MODIFICADO
#define LIMITE_5874 6074
#define FACTOR_5874 6

int aplicar_limite5874(int valor) {
    if (valor > LIMITE_5874) return LIMITE_5874;
    return valor * FACTOR_5874;
}
