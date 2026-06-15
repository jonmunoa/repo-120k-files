// fichero 11482 -- macros y constantes -- MODIFICADO
#define LIMITE_11482 11682
#define FACTOR_11482 4

int aplicar_limite11482(int valor) {
    if (valor > LIMITE_11482) return LIMITE_11482;
    return valor * FACTOR_11482;
}
