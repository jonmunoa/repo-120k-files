// fichero 18334 -- macros y constantes
#define LIMITE_18334 18434
#define FACTOR_18334 5

int aplicar_limite18334(int valor) {
    if (valor > LIMITE_18334) return LIMITE_18334;
    return valor * FACTOR_18334;
}
