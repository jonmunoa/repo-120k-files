// fichero 30482 -- macros y constantes
#define LIMITE_30482 30582
#define FACTOR_30482 3

int aplicar_limite30482(int valor) {
    if (valor > LIMITE_30482) return LIMITE_30482;
    return valor * FACTOR_30482;
}
