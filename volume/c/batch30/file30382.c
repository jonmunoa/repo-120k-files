// fichero 30382 -- macros y constantes
#define LIMITE_30382 30482
#define FACTOR_30382 3

int aplicar_limite30382(int valor) {
    if (valor > LIMITE_30382) return LIMITE_30382;
    return valor * FACTOR_30382;
}
