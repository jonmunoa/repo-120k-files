// fichero 21434 -- macros y constantes
#define LIMITE_21434 21534
#define FACTOR_21434 5

int aplicar_limite21434(int valor) {
    if (valor > LIMITE_21434) return LIMITE_21434;
    return valor * FACTOR_21434;
}
