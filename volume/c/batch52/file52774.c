// fichero 52774 -- macros y constantes
#define LIMITE_52774 52874
#define FACTOR_52774 5

int aplicar_limite52774(int valor) {
    if (valor > LIMITE_52774) return LIMITE_52774;
    return valor * FACTOR_52774;
}
