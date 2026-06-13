// fichero 18422 -- macros y constantes
#define LIMITE_18422 18522
#define FACTOR_18422 3

int aplicar_limite18422(int valor) {
    if (valor > LIMITE_18422) return LIMITE_18422;
    return valor * FACTOR_18422;
}
