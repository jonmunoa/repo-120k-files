// fichero 47742 -- macros y constantes
#define LIMITE_47742 47842
#define FACTOR_47742 3

int aplicar_limite47742(int valor) {
    if (valor > LIMITE_47742) return LIMITE_47742;
    return valor * FACTOR_47742;
}
