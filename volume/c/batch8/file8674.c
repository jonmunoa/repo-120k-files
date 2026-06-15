// fichero 8674 -- macros y constantes -- MODIFICADO
#define LIMITE_8674 8874
#define FACTOR_8674 6

int aplicar_limite8674(int valor) {
    if (valor > LIMITE_8674) return LIMITE_8674;
    return valor * FACTOR_8674;
}
