// fichero 2106 -- macros y constantes
#define LIMITE_2106 2206
#define FACTOR_2106 2

int aplicar_limite2106(int valor) {
    if (valor > LIMITE_2106) return LIMITE_2106;
    return valor * FACTOR_2106;
}
