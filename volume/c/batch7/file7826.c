// fichero 7826 -- macros y constantes
#define LIMITE_7826 7926
#define FACTOR_7826 2

int aplicar_limite7826(int valor) {
    if (valor > LIMITE_7826) return LIMITE_7826;
    return valor * FACTOR_7826;
}
