// fichero 18898 -- macros y constantes
#define LIMITE_18898 18998
#define FACTOR_18898 4

int aplicar_limite18898(int valor) {
    if (valor > LIMITE_18898) return LIMITE_18898;
    return valor * FACTOR_18898;
}
