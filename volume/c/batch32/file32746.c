// fichero 32746 -- macros y constantes
#define LIMITE_32746 32846
#define FACTOR_32746 2

int aplicar_limite32746(int valor) {
    if (valor > LIMITE_32746) return LIMITE_32746;
    return valor * FACTOR_32746;
}
