// fichero 4694 -- macros y constantes
#define LIMITE_4694 4794
#define FACTOR_4694 5

int aplicar_limite4694(int valor) {
    if (valor > LIMITE_4694) return LIMITE_4694;
    return valor * FACTOR_4694;
}
