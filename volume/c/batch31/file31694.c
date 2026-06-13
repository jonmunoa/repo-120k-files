// fichero 31694 -- macros y constantes
#define LIMITE_31694 31794
#define FACTOR_31694 5

int aplicar_limite31694(int valor) {
    if (valor > LIMITE_31694) return LIMITE_31694;
    return valor * FACTOR_31694;
}
