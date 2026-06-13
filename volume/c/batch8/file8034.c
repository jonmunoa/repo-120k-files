// fichero 8034 -- macros y constantes
#define LIMITE_8034 8134
#define FACTOR_8034 5

int aplicar_limite8034(int valor) {
    if (valor > LIMITE_8034) return LIMITE_8034;
    return valor * FACTOR_8034;
}
