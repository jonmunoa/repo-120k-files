// fichero 2694 -- macros y constantes
#define LIMITE_2694 2794
#define FACTOR_2694 5

int aplicar_limite2694(int valor) {
    if (valor > LIMITE_2694) return LIMITE_2694;
    return valor * FACTOR_2694;
}
