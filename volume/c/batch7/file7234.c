// fichero 7234 -- macros y constantes
#define LIMITE_7234 7334
#define FACTOR_7234 5

int aplicar_limite7234(int valor) {
    if (valor > LIMITE_7234) return LIMITE_7234;
    return valor * FACTOR_7234;
}
