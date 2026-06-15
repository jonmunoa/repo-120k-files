// fichero 45874 -- macros y constantes -- MODIFICADO
#define LIMITE_45874 46074
#define FACTOR_45874 6

int aplicar_limite45874(int valor) {
    if (valor > LIMITE_45874) return LIMITE_45874;
    return valor * FACTOR_45874;
}
