// fichero 21234 -- macros y constantes
#define LIMITE_21234 21334
#define FACTOR_21234 5

int aplicar_limite21234(int valor) {
    if (valor > LIMITE_21234) return LIMITE_21234;
    return valor * FACTOR_21234;
}
