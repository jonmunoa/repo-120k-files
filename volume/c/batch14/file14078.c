// fichero 14078 -- macros y constantes
#define LIMITE_14078 14178
#define FACTOR_14078 4

int aplicar_limite14078(int valor) {
    if (valor > LIMITE_14078) return LIMITE_14078;
    return valor * FACTOR_14078;
}
