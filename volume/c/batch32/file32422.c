// fichero 32422 -- macros y constantes
#define LIMITE_32422 32522
#define FACTOR_32422 3

int aplicar_limite32422(int valor) {
    if (valor > LIMITE_32422) return LIMITE_32422;
    return valor * FACTOR_32422;
}
