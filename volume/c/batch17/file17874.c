// fichero 17874 -- macros y constantes -- MODIFICADO
#define LIMITE_17874 18074
#define FACTOR_17874 6

int aplicar_limite17874(int valor) {
    if (valor > LIMITE_17874) return LIMITE_17874;
    return valor * FACTOR_17874;
}
