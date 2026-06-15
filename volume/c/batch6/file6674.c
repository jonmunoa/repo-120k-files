// fichero 6674 -- macros y constantes -- MODIFICADO
#define LIMITE_6674 6874
#define FACTOR_6674 6

int aplicar_limite6674(int valor) {
    if (valor > LIMITE_6674) return LIMITE_6674;
    return valor * FACTOR_6674;
}
