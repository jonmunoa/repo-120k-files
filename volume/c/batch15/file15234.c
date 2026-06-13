// fichero 15234 -- macros y constantes
#define LIMITE_15234 15334
#define FACTOR_15234 5

int aplicar_limite15234(int valor) {
    if (valor > LIMITE_15234) return LIMITE_15234;
    return valor * FACTOR_15234;
}
