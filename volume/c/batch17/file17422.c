// fichero 17422 -- macros y constantes
#define LIMITE_17422 17522
#define FACTOR_17422 3

int aplicar_limite17422(int valor) {
    if (valor > LIMITE_17422) return LIMITE_17422;
    return valor * FACTOR_17422;
}
