// fichero 9694 -- macros y constantes
#define LIMITE_9694 9794
#define FACTOR_9694 5

int aplicar_limite9694(int valor) {
    if (valor > LIMITE_9694) return LIMITE_9694;
    return valor * FACTOR_9694;
}
