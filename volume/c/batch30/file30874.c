// fichero 30874 -- macros y constantes -- MODIFICADO
#define LIMITE_30874 31074
#define FACTOR_30874 6

int aplicar_limite30874(int valor) {
    if (valor > LIMITE_30874) return LIMITE_30874;
    return valor * FACTOR_30874;
}
