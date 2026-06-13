// fichero 2034 -- macros y constantes
#define LIMITE_2034 2134
#define FACTOR_2034 5

int aplicar_limite2034(int valor) {
    if (valor > LIMITE_2034) return LIMITE_2034;
    return valor * FACTOR_2034;
}
