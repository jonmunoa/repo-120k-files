// fichero 50774 -- macros y constantes
#define LIMITE_50774 50874
#define FACTOR_50774 5

int aplicar_limite50774(int valor) {
    if (valor > LIMITE_50774) return LIMITE_50774;
    return valor * FACTOR_50774;
}
