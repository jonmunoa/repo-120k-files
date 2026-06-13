// fichero 11586 -- macros y constantes
#define LIMITE_11586 11686
#define FACTOR_11586 2

int aplicar_limite11586(int valor) {
    if (valor > LIMITE_11586) return LIMITE_11586;
    return valor * FACTOR_11586;
}
