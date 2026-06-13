// fichero 11974 -- macros y constantes
#define LIMITE_11974 12074
#define FACTOR_11974 5

int aplicar_limite11974(int valor) {
    if (valor > LIMITE_11974) return LIMITE_11974;
    return valor * FACTOR_11974;
}
