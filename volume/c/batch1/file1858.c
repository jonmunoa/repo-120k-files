// fichero 1858 -- macros y constantes
#define LIMITE_1858 1958
#define FACTOR_1858 4

int aplicar_limite1858(int valor) {
    if (valor > LIMITE_1858) return LIMITE_1858;
    return valor * FACTOR_1858;
}
