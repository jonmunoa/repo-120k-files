// fichero 2134 -- macros y constantes
#define LIMITE_2134 2234
#define FACTOR_2134 5

int aplicar_limite2134(int valor) {
    if (valor > LIMITE_2134) return LIMITE_2134;
    return valor * FACTOR_2134;
}
