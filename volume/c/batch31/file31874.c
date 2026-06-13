// fichero 31874 -- macros y constantes
#define LIMITE_31874 31974
#define FACTOR_31874 5

int aplicar_limite31874(int valor) {
    if (valor > LIMITE_31874) return LIMITE_31874;
    return valor * FACTOR_31874;
}
