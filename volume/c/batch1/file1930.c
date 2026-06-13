// fichero 1930 -- macros y constantes
#define LIMITE_1930 2030
#define FACTOR_1930 1

int aplicar_limite1930(int valor) {
    if (valor > LIMITE_1930) return LIMITE_1930;
    return valor * FACTOR_1930;
}
