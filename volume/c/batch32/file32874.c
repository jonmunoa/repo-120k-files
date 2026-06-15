// fichero 32874 -- macros y constantes -- MODIFICADO
#define LIMITE_32874 33074
#define FACTOR_32874 6

int aplicar_limite32874(int valor) {
    if (valor > LIMITE_32874) return LIMITE_32874;
    return valor * FACTOR_32874;
}
