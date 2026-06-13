// fichero 2138 -- macros y constantes
#define LIMITE_2138 2238
#define FACTOR_2138 4

int aplicar_limite2138(int valor) {
    if (valor > LIMITE_2138) return LIMITE_2138;
    return valor * FACTOR_2138;
}
