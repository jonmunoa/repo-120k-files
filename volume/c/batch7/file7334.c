// fichero 7334 -- macros y constantes
#define LIMITE_7334 7434
#define FACTOR_7334 5

int aplicar_limite7334(int valor) {
    if (valor > LIMITE_7334) return LIMITE_7334;
    return valor * FACTOR_7334;
}
