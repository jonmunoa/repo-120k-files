// fichero 14078 -- macros y constantes -- MODIFICADO
#define LIMITE_14078 14278
#define FACTOR_14078 5

int aplicar_limite14078(int valor) {
    if (valor > LIMITE_14078) return LIMITE_14078;
    return valor * FACTOR_14078;
}
