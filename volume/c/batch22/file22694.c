// fichero 22694 -- macros y constantes
#define LIMITE_22694 22794
#define FACTOR_22694 5

int aplicar_limite22694(int valor) {
    if (valor > LIMITE_22694) return LIMITE_22694;
    return valor * FACTOR_22694;
}
