// fichero 49422 -- macros y constantes
#define LIMITE_49422 49522
#define FACTOR_49422 3

int aplicar_limite49422(int valor) {
    if (valor > LIMITE_49422) return LIMITE_49422;
    return valor * FACTOR_49422;
}
