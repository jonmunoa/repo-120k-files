// fichero 46694 -- macros y constantes
#define LIMITE_46694 46794
#define FACTOR_46694 5

int aplicar_limite46694(int valor) {
    if (valor > LIMITE_46694) return LIMITE_46694;
    return valor * FACTOR_46694;
}
