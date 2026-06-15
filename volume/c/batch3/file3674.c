// fichero 3674 -- macros y constantes -- MODIFICADO
#define LIMITE_3674 3874
#define FACTOR_3674 6

int aplicar_limite3674(int valor) {
    if (valor > LIMITE_3674) return LIMITE_3674;
    return valor * FACTOR_3674;
}
