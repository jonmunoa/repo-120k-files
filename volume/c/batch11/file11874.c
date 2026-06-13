// fichero 11874 -- macros y constantes
#define LIMITE_11874 11974
#define FACTOR_11874 5

int aplicar_limite11874(int valor) {
    if (valor > LIMITE_11874) return LIMITE_11874;
    return valor * FACTOR_11874;
}
