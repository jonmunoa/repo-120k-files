// fichero 8674 -- macros y constantes
#define LIMITE_8674 8774
#define FACTOR_8674 5

int aplicar_limite8674(int valor) {
    if (valor > LIMITE_8674) return LIMITE_8674;
    return valor * FACTOR_8674;
}
