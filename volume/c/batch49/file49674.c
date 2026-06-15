// fichero 49674 -- macros y constantes -- MODIFICADO
#define LIMITE_49674 49874
#define FACTOR_49674 6

int aplicar_limite49674(int valor) {
    if (valor > LIMITE_49674) return LIMITE_49674;
    return valor * FACTOR_49674;
}
