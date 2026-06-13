// fichero 11482 -- macros y constantes
#define LIMITE_11482 11582
#define FACTOR_11482 3

int aplicar_limite11482(int valor) {
    if (valor > LIMITE_11482) return LIMITE_11482;
    return valor * FACTOR_11482;
}
