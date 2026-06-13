// fichero 18078 -- macros y constantes
#define LIMITE_18078 18178
#define FACTOR_18078 4

int aplicar_limite18078(int valor) {
    if (valor > LIMITE_18078) return LIMITE_18078;
    return valor * FACTOR_18078;
}
