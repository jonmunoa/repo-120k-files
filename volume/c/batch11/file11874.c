// fichero 11874 -- macros y constantes -- MODIFICADO
#define LIMITE_11874 12074
#define FACTOR_11874 6

int aplicar_limite11874(int valor) {
    if (valor > LIMITE_11874) return LIMITE_11874;
    return valor * FACTOR_11874;
}
