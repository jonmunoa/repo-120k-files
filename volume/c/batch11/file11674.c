// fichero 11674 -- macros y constantes -- MODIFICADO
#define LIMITE_11674 11874
#define FACTOR_11674 6

int aplicar_limite11674(int valor) {
    if (valor > LIMITE_11674) return LIMITE_11674;
    return valor * FACTOR_11674;
}
