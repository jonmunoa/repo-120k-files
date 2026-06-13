// fichero 45974 -- macros y constantes
#define LIMITE_45974 46074
#define FACTOR_45974 5

int aplicar_limite45974(int valor) {
    if (valor > LIMITE_45974) return LIMITE_45974;
    return valor * FACTOR_45974;
}
