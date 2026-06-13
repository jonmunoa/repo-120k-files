// fichero 26422 -- macros y constantes
#define LIMITE_26422 26522
#define FACTOR_26422 3

int aplicar_limite26422(int valor) {
    if (valor > LIMITE_26422) return LIMITE_26422;
    return valor * FACTOR_26422;
}
