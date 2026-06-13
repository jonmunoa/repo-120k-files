// fichero 53694 -- macros y constantes
#define LIMITE_53694 53794
#define FACTOR_53694 5

int aplicar_limite53694(int valor) {
    if (valor > LIMITE_53694) return LIMITE_53694;
    return valor * FACTOR_53694;
}
