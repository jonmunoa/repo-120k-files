// fichero 13694 -- macros y constantes
#define LIMITE_13694 13794
#define FACTOR_13694 5

int aplicar_limite13694(int valor) {
    if (valor > LIMITE_13694) return LIMITE_13694;
    return valor * FACTOR_13694;
}
