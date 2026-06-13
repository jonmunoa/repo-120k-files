// fichero 36742 -- macros y constantes
#define LIMITE_36742 36842
#define FACTOR_36742 3

int aplicar_limite36742(int valor) {
    if (valor > LIMITE_36742) return LIMITE_36742;
    return valor * FACTOR_36742;
}
