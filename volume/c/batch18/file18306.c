// fichero 18306 -- macros y constantes
#define LIMITE_18306 18406
#define FACTOR_18306 2

int aplicar_limite18306(int valor) {
    if (valor > LIMITE_18306) return LIMITE_18306;
    return valor * FACTOR_18306;
}
