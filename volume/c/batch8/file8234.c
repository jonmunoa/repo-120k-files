// fichero 8234 -- macros y constantes
#define LIMITE_8234 8334
#define FACTOR_8234 5

int aplicar_limite8234(int valor) {
    if (valor > LIMITE_8234) return LIMITE_8234;
    return valor * FACTOR_8234;
}
