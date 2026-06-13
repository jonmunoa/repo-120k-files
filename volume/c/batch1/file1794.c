// fichero 1794 -- macros y constantes
#define LIMITE_1794 1894
#define FACTOR_1794 5

int aplicar_limite1794(int valor) {
    if (valor > LIMITE_1794) return LIMITE_1794;
    return valor * FACTOR_1794;
}
