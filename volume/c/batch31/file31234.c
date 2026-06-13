// fichero 31234 -- macros y constantes
#define LIMITE_31234 31334
#define FACTOR_31234 5

int aplicar_limite31234(int valor) {
    if (valor > LIMITE_31234) return LIMITE_31234;
    return valor * FACTOR_31234;
}
