// fichero 8134 -- macros y constantes
#define LIMITE_8134 8234
#define FACTOR_8134 5

int aplicar_limite8134(int valor) {
    if (valor > LIMITE_8134) return LIMITE_8134;
    return valor * FACTOR_8134;
}
