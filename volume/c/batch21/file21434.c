// fichero 21434 -- macros y constantes -- MODIFICADO
#define LIMITE_21434 21634
#define FACTOR_21434 6

int aplicar_limite21434(int valor) {
    if (valor > LIMITE_21434) return LIMITE_21434;
    return valor * FACTOR_21434;
}
