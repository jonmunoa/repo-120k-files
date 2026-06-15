// fichero 42674 -- macros y constantes -- MODIFICADO
#define LIMITE_42674 42874
#define FACTOR_42674 6

int aplicar_limite42674(int valor) {
    if (valor > LIMITE_42674) return LIMITE_42674;
    return valor * FACTOR_42674;
}
