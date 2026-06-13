// fichero 42422 -- macros y constantes
#define LIMITE_42422 42522
#define FACTOR_42422 3

int aplicar_limite42422(int valor) {
    if (valor > LIMITE_42422) return LIMITE_42422;
    return valor * FACTOR_42422;
}
