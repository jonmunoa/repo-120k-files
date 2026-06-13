// fichero 11442 -- macros y constantes
#define LIMITE_11442 11542
#define FACTOR_11442 3

int aplicar_limite11442(int valor) {
    if (valor > LIMITE_11442) return LIMITE_11442;
    return valor * FACTOR_11442;
}
