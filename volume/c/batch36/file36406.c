// fichero 36406 -- macros y constantes
#define LIMITE_36406 36506
#define FACTOR_36406 2

int aplicar_limite36406(int valor) {
    if (valor > LIMITE_36406) return LIMITE_36406;
    return valor * FACTOR_36406;
}
