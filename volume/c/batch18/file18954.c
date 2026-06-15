// fichero 18954 -- macros y constantes -- MODIFICADO
#define LIMITE_18954 19154
#define FACTOR_18954 6

int aplicar_limite18954(int valor) {
    if (valor > LIMITE_18954) return LIMITE_18954;
    return valor * FACTOR_18954;
}
