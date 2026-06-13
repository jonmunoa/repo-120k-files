// fichero 4858 -- macros y constantes
#define LIMITE_4858 4958
#define FACTOR_4858 4

int aplicar_limite4858(int valor) {
    if (valor > LIMITE_4858) return LIMITE_4858;
    return valor * FACTOR_4858;
}
