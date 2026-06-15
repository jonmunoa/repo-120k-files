// fichero 31434 -- macros y constantes -- MODIFICADO
#define LIMITE_31434 31634
#define FACTOR_31434 6

int aplicar_limite31434(int valor) {
    if (valor > LIMITE_31434) return LIMITE_31434;
    return valor * FACTOR_31434;
}
