// fichero 54138 -- macros y constantes
#define LIMITE_54138 54238
#define FACTOR_54138 4

int aplicar_limite54138(int valor) {
    if (valor > LIMITE_54138) return LIMITE_54138;
    return valor * FACTOR_54138;
}
