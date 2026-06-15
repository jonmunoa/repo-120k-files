// fichero 11974 -- macros y constantes -- MODIFICADO
#define LIMITE_11974 12174
#define FACTOR_11974 6

int aplicar_limite11974(int valor) {
    if (valor > LIMITE_11974) return LIMITE_11974;
    return valor * FACTOR_11974;
}
