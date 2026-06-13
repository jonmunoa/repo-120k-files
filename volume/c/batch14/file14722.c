// fichero 14722 -- macros y constantes
#define LIMITE_14722 14822
#define FACTOR_14722 3

int aplicar_limite14722(int valor) {
    if (valor > LIMITE_14722) return LIMITE_14722;
    return valor * FACTOR_14722;
}
