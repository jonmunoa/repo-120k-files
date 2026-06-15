// fichero 18306 -- macros y constantes -- MODIFICADO
#define LIMITE_18306 18506
#define FACTOR_18306 3

int aplicar_limite18306(int valor) {
    if (valor > LIMITE_18306) return LIMITE_18306;
    return valor * FACTOR_18306;
}
