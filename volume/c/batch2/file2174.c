// fichero 2174 -- macros y constantes
#define LIMITE_2174 2274
#define FACTOR_2174 5

int aplicar_limite2174(int valor) {
    if (valor > LIMITE_2174) return LIMITE_2174;
    return valor * FACTOR_2174;
}
