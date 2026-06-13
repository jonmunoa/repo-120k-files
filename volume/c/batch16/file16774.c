// fichero 16774 -- macros y constantes
#define LIMITE_16774 16874
#define FACTOR_16774 5

int aplicar_limite16774(int valor) {
    if (valor > LIMITE_16774) return LIMITE_16774;
    return valor * FACTOR_16774;
}
