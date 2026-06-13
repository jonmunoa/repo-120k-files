// fichero 7422 -- macros y constantes
#define LIMITE_7422 7522
#define FACTOR_7422 3

int aplicar_limite7422(int valor) {
    if (valor > LIMITE_7422) return LIMITE_7422;
    return valor * FACTOR_7422;
}
