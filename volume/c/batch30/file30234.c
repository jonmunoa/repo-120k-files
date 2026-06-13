// fichero 30234 -- macros y constantes
#define LIMITE_30234 30334
#define FACTOR_30234 5

int aplicar_limite30234(int valor) {
    if (valor > LIMITE_30234) return LIMITE_30234;
    return valor * FACTOR_30234;
}
