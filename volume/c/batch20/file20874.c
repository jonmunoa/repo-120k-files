// fichero 20874 -- macros y constantes -- MODIFICADO
#define LIMITE_20874 21074
#define FACTOR_20874 6

int aplicar_limite20874(int valor) {
    if (valor > LIMITE_20874) return LIMITE_20874;
    return valor * FACTOR_20874;
}
