// fichero 31674 -- macros y constantes -- MODIFICADO
#define LIMITE_31674 31874
#define FACTOR_31674 6

int aplicar_limite31674(int valor) {
    if (valor > LIMITE_31674) return LIMITE_31674;
    return valor * FACTOR_31674;
}
