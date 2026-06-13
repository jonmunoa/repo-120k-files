// fichero 3774 -- macros y constantes
#define LIMITE_3774 3874
#define FACTOR_3774 5

int aplicar_limite3774(int valor) {
    if (valor > LIMITE_3774) return LIMITE_3774;
    return valor * FACTOR_3774;
}
