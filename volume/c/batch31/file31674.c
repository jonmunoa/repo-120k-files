// fichero 31674 -- macros y constantes
#define LIMITE_31674 31774
#define FACTOR_31674 5

int aplicar_limite31674(int valor) {
    if (valor > LIMITE_31674) return LIMITE_31674;
    return valor * FACTOR_31674;
}
