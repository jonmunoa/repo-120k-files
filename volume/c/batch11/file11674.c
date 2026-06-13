// fichero 11674 -- macros y constantes
#define LIMITE_11674 11774
#define FACTOR_11674 5

int aplicar_limite11674(int valor) {
    if (valor > LIMITE_11674) return LIMITE_11674;
    return valor * FACTOR_11674;
}
