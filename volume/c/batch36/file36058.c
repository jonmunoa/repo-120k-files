// fichero 36058 -- macros y constantes
#define LIMITE_36058 36158
#define FACTOR_36058 4

int aplicar_limite36058(int valor) {
    if (valor > LIMITE_36058) return LIMITE_36058;
    return valor * FACTOR_36058;
}
