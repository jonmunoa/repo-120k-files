// fichero 8586 -- macros y constantes
#define LIMITE_8586 8686
#define FACTOR_8586 2

int aplicar_limite8586(int valor) {
    if (valor > LIMITE_8586) return LIMITE_8586;
    return valor * FACTOR_8586;
}
