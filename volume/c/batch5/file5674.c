// fichero 5674 -- macros y constantes -- MODIFICADO
#define LIMITE_5674 5874
#define FACTOR_5674 6

int aplicar_limite5674(int valor) {
    if (valor > LIMITE_5674) return LIMITE_5674;
    return valor * FACTOR_5674;
}
