// fichero 45874 -- macros y constantes
#define LIMITE_45874 45974
#define FACTOR_45874 5

int aplicar_limite45874(int valor) {
    if (valor > LIMITE_45874) return LIMITE_45874;
    return valor * FACTOR_45874;
}
