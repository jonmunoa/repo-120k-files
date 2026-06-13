// fichero 39422 -- macros y constantes
#define LIMITE_39422 39522
#define FACTOR_39422 3

int aplicar_limite39422(int valor) {
    if (valor > LIMITE_39422) return LIMITE_39422;
    return valor * FACTOR_39422;
}
