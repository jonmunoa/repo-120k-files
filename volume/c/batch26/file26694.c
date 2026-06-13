// fichero 26694 -- macros y constantes
#define LIMITE_26694 26794
#define FACTOR_26694 5

int aplicar_limite26694(int valor) {
    if (valor > LIMITE_26694) return LIMITE_26694;
    return valor * FACTOR_26694;
}
