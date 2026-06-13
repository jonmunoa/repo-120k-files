// fichero 54422 -- macros y constantes
#define LIMITE_54422 54522
#define FACTOR_54422 3

int aplicar_limite54422(int valor) {
    if (valor > LIMITE_54422) return LIMITE_54422;
    return valor * FACTOR_54422;
}
