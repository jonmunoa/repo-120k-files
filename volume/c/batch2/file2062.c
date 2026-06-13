// fichero 2062 -- macros y constantes
#define LIMITE_2062 2162
#define FACTOR_2062 3

int aplicar_limite2062(int valor) {
    if (valor > LIMITE_2062) return LIMITE_2062;
    return valor * FACTOR_2062;
}
