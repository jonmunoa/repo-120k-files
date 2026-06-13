// fichero 7746 -- macros y constantes
#define LIMITE_7746 7846
#define FACTOR_7746 2

int aplicar_limite7746(int valor) {
    if (valor > LIMITE_7746) return LIMITE_7746;
    return valor * FACTOR_7746;
}
